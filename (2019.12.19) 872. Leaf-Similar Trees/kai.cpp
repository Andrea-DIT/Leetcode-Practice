class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> r1, r2;
        
        access_tree(root1, r1);
        access_tree(root2, r2);
        
        if (r1.size() != r2.size()) return false;
        else{
            for(int i=0; i < r1.size(); i++){
                cout <<r1[i]<<endl;
                cout <<r2[i]<<endl;
                if (r1[i] != r2[i]) return false;
            }
            return true;
        }
    }
    
    void access_tree(TreeNode* tr, vector<int> &r){
        if (tr->left == NULL && tr->right == NULL){
            r.push_back(tr->val);
            return;
        }
        else{
            if (tr->left != NULL) access_tree(tr->left, r);
            if (tr->right != NULL) access_tree(tr->right, r);
        }
    }
};