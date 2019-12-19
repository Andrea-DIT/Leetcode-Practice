/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leafs1, leafs2;
        
        traversal(root1, leafs1);
        traversal(root2, leafs2);
        
        return (leafs1==leafs2);
    }
    
    void traversal(TreeNode* node, vector<int>& leafs) {
        // LRV: Post-order
        if (node == NULL) return;
        
        traversal(node->left, leafs);
        traversal(node->right, leafs);
        
        if (node->left==NULL && node->right==NULL) {
            leafs.push_back(node->val);
        }
    }
};
