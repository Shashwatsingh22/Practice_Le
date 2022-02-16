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
    int Max=INT_MIN;

    int height(TreeNode* ptr)
    {
        if(!ptr) return 0;

        int left=height(ptr->left);
        int right=height(ptr->right);

        if(left<0) left=0;
        if(right<0) right=0;

        Max=max(Max,left+right+ptr->val);
        cout<<Max<<" ";
        return ptr->val+max(left,right);
    }
public:
    int maxPathSum(TreeNode* root) {
        if(!root) return 0;
        height(root);
        return Max;
    }
};


///////////
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
    int Max=INT_MIN;
    int i=1;
    
    int maxSum(TreeNode* ptr)
    {
        if(!ptr) return 0;
        
        int left=maxSum(ptr->left);
        int right=maxSum(ptr->right);
        
        if(left<0) left=0;
        if(right<0) right=0;
        
        return max(left,right)+ptr->val;
    }
public:
    int maxPathSum(TreeNode* root) {
       if(!root) return 0;
        if(!root->left and !root->right and i>0) return root->val;
        i--;
        int left=maxSum(root->left);
        int right=maxSum(root->right);
        
        if(left<0) left=0;
        if(right<0) right=0;
        
        Max=max(Max,left+right+root->val);
        
        maxPathSum(root->left);
        maxPathSum(root->right);
        
        return Max;
    }
};