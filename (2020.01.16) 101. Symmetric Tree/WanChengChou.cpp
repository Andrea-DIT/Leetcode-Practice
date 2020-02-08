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
    bool isSymmetric(TreeNode* root)
    {
        if(root == NULL) return true;
        return checkBranches(root->left, root->right);
    }
    
    bool checkBranches(TreeNode *rootL, TreeNode *rootR)
    {
        if(rootL == NULL && rootR == NULL) return true;
        if((rootL == NULL && rootR != NULL) || (rootL != NULL && rootR == NULL)) return false;
        if(rootL->val != rootR->val) return false;
        else return checkBranches(rootL->left, rootR->right) && checkBranches(rootL->right, rootR->left);
    }
};