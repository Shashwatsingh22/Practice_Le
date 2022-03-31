/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    TreeNode* createUtil(vector<int> pre,int &itr,long long upperB)
    {
        if(pre.size()==itr || pre[itr]>upperB) return NULL;
        TreeNode* root=new TreeNode(pre[itr++]);
        root->left=createUtil(pre,itr,root->val);
        root->right=createUtil(pre,itr,upperB);
        
        return root;
    }
    public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int itr=0;
        return createUtil(preorder,itr,LONG_MAX);
    }
    
};