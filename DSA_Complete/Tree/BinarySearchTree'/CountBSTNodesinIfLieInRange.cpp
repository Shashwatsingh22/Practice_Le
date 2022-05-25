class Solution{
    void inorder(Node* root, int l, int h,int &count)
    {
        if(!root) return;
        inorder(root->left,l,h,count);
        if(root->data>=l && root->data<=h)
        {
            count++;
        }
        inorder(root->right,l,h,count);
    }
public:
    int getCount(Node *root, int l, int h)
    {
         int ans=0;
         inorder(root,l,h,ans);
         return ans;
    }
};

/* Find Sum of Number in that range.(LeetCode) */

class Solution {
void inorder(TreeNode ptr, int l, int h, int &ans)
{
if(!ptr) return;
inorder(ptr->left,l,h,ans);
if(ptr->val>=l && ptr->val<=h) ans+=ptr->val;
inorder(ptr->right,l,h,ans);
}
public:
int rangeSumBST(TreeNode* root, int low, int high) {
int ans=0;
inorder(root,low,high,ans);
return ans;
}
};