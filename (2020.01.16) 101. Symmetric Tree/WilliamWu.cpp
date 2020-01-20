class Solution {
public:
    
    bool func(TreeNode* Lnode, TreeNode* Rnode)
    {    
        if(Lnode != NULL && Rnode != NULL)
        {
            if(Lnode->val!=Rnode->val)
                return false;
            else
            {
                if(!func(Lnode->left, Rnode->right))
                    return false;
                if(!func(Lnode->right, Rnode->left))
                    return false;
            }
        }
        else if(Lnode == NULL && Rnode == NULL)
            return true; 
        else
            return false;
        
        return true;
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        return func(root->left, root->right);
    }
};
