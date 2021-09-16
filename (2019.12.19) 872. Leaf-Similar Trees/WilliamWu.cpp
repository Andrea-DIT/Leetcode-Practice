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
    
    void leafsequence(TreeNode* node, vector<int>& leafseq)
    {
        if(node==NULL)
            return;
        
        if(node->left==NULL && node->right==NULL)
        {
            leafseq.push_back(node->val);
            return;
        }
        
        if(node->left)
            leafsequence(node->left, leafseq);
        if(node->right)
            leafsequence(node->right, leafseq);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        bool ans = true;
        vector<int> seq1, seq2;
        
        leafsequence(root1, seq1);
        leafsequence(root2, seq2);
        
        if(seq1.size()!=seq2.size())
        {
            ans = false;
            return ans;
        }
        
        int size = seq1.size();
        for(int i = 0; i < size; i++)
        {
            if(seq1[i]-seq2[i]!=0)
            {
                ans = false;
                break;
            }
        }
        
        return ans;
    }
};
