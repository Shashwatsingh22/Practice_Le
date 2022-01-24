class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
     
        vector<int> ans;
        if(!root) return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        ans.push_back(root->val);

        while(true)
        {
           int Size=q.size();
           int data=0;
            
           if(Size==0) return ans; 
            
            while(Size>0)
            {
                TreeNode* ptr=q.front();
                q.pop();
                
                if(ptr->left)
                {
                   data=ptr->left->val;
                   q.push(ptr->left);
                }
                if(ptr->right)
                {
                   data=ptr->right->val;
                   q.push(ptr->right);
                }
              Size--;
             }
          if(data!=0) ans.push_back(data);
        }
        return ans;
    }
};