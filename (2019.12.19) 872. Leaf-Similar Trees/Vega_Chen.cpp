c/**
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
        vector<int> leaves1;
        vector<int> leaves2;
        
        getLeaves(root1, leaves1);
        getLeaves(root2, leaves2);
        
        return leaves1 == leaves2;
    }
    
    void getLeaves(TreeNode* node, vector<int> &leaves){
        if(node == NULL) return;
        if(node->left == NULL && node->right ==NULL) leaves.push_back(node->val);
        getLeaves(node->left, leaves);
        getLeaves(node->right, leaves);
    }
};