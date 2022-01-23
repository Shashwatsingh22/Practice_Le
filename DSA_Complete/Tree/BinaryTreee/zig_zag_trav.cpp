vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         int temp=1;
        //When temp==1 then reverse.
        //when temp==0 no reverse.
        
        queue<TreeNode*> q;
        vector<vector<int>> v;
        vector<int> t;
        
        if(!root) return v;
        
        t.push_back(root->val);
        v.push_back(t);
        t.clear();
        q.push(root);
        
        while(true)
        {
           
           int Size=q.size();
           TreeNode *ptr=NULL;
           
           if(Size==0) return v;
           
           while(Size>0)
           {
              
              ptr=q.front();
              q.pop();
              
              if(ptr->left)
              {
                  t.push_back(ptr->left->val);
                  q.push(ptr->left);
              }
               
              if(ptr->right)
              {
                  t.push_back(ptr->right->val);
                  q.push(ptr->right);
              }
Size--;
           }
           
           if(temp==1 && !t.empty())
           {
               reverse(t.begin(),t.end());
               temp=0;
           }
else
{
temp=1;}
         if(!t.empty())
         {
           v.push_back(t);
           t.clear();
         }
        }
    
        return v;
    
    }