class Solution{
    public:
    vector<int> soln(Node* root)
    {
        if(!root) return {1,0,INT_MAX,INT_MIN};
        
        if(!root->left && !root->right) return {1,1,root->data,root->data};
        
        vector<int> left = soln(root->left);
        vector<int> right = soln(root->right);
        
        if(left[0] && right[0])
        {
            if(left[3]<root->data && right[2]>root->data)
            {
                if(left[2]==INT_MAX) return {1,right[1]+1,root->data,right[3]};
                
                else if(right[2]==INT_MAX) return {1,left[1]+1,left[2],root->data};
                
                else return {1,left[1]+right[1]+1,left[2],right[3]};
            }
        }
        
        if(left[1]>right[1]) return {0,left[1],0,0};
        
        return {0,right[1],0,0};
    } 
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    int largestBst(Node *root)
    {
        vector<int> ans = soln(root);
        return ans[1];
    }
};