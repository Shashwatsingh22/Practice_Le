class Solution {
bool ans=true;
public:
    bool isBalanced(TreeNode* root) {
     
         if(!root || !root->left && !root->right) return  true;
         
     
         
         int lh=height(root->left);
         int rh=height(root->right);
        
       cout<<"lh=>" <<lh<<" "<<"rh=>"<<rh<<" Checking is Greater than 1 or not =>"<<abs(lh-rh)<<" =>"<<(abs(lh-rh) > 1)<<endl;
        
    if(abs(lh-rh) > 1)
        {
            ans=false;
        }
        
        isBalanced(root->left);
        isBalanced(root->right);
        
        return ans;
}
    
    private:
    
    int height(TreeNode* ptr)
    {   
         if(!ptr) return 0;
        return 1+ max(height(ptr->left),height(ptr->right));
     }
};