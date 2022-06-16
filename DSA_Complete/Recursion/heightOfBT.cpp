class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        
        int x=0;
        x+=maxDepth(root->left);
        int y=0;
        y+=maxDepth(root->right);
        
        return 1+max(x,y);
    }
};