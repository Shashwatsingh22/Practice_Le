class Solution {
    private:
    
    void LOT(TreeNode* ptr,vector<int> &v,int dir)
    {
        queue<TreeNode*> q;
        q.push(ptr);
        v.push_back(ptr->val);
        
        if(dir==1)
        {
         while(!q.empty())
         {
           TreeNode* ptr=q.front();
             q.pop();
             
             if(ptr->left)
             {
                v.push_back(ptr->left->val);
                 q.push(ptr->left);
             }
             else
                {
                    v.push_back(-1);
                }
             if(ptr->right)
             {
                 v.push_back(ptr->right->val);
                 q.push(ptr->right);
             }
             else
                {
                    v.push_back(-1);
                }
         }
        }
        else
        {
            while(!q.empty())
         {
            TreeNode* ptr=q.front();
             q.pop();
             
             if(ptr->right)
             {
                v.push_back(ptr->right->val);
                 q.push(ptr->right);
             }
                else
                {
                    v.push_back(-1);
                }
             if(ptr->left)
             {
                 v.push_back(ptr->left->val);
                 q.push(ptr->left);
             }
                else
                {
                    v.push_back(-1);
                }
         }
        }
    }
    
    void Display(vector<int> v)
    {
        for(auto A: v)
        {
            cout<<A<<" ";
        }
        cout<<endl;
    }
public:
    bool isSymmetric(TreeNode* root) {
        
        if(!root || root->left && !root->right || !root->left && root->right) return false;
        
        if(root->left && root->right)
        {
            vector<int> left,right;
           LOT(root->left,left,1);
           LOT(root->right,right,0);
            
            Display(left);
            Display(right);
            
            
            
                return left==right;
            
            }
        
        return true;
    }
};