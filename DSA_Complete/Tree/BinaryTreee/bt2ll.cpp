class Solution {
    private:
    TreeNode* prev=NULL;
public:
    void flatten(TreeNode* root) {
        if(!root) return;
        
        flatten(root->right);
        flatten(root->left);
        
        root->left=NULL;
        root->right=prev;
        prev=root;
    }
};