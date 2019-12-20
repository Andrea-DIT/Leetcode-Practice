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
    bool leafSimilar(TreeNode* root1, TreeNode* root2)
    {
        vector<int> LVS1 = getLVS(root1);
        vector<int> LVS2 = getLVS(root2);
        return (LVS1 == LVS2);
    }
    
    vector<int> getLVS(TreeNode* root)
    {
        vector<int> LVS;
        stack<TreeNode*> node;
        bool check = true;
        node.push(root);
        while(node.size() > 0)
        {
            root = node.top();
            node.pop();
            if(root->right != NULL) node.push(root->right);
            if(root->left != NULL) node.push(root->left);
            if(root->right == NULL && root->left == NULL) LVS.push_back(root->val);
        }
        return LVS;
    }
};