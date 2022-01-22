void Display(vector<int> v)
    {
        for(auto A: v)
        {
            cout<<A<<" ";
        }
        cout<<endl;
    }
    
    bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
        vector<int> v1,v2;
        
        v1=LOT(r1);
        v2=LOT(r2);
       //Display(v1);
       //Display(v2);
        if(v1.size()!=v2.size())
        {
            return false;
        }
        
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]!=v2[i])
            {
                return false;
            }
        }
        
        return true;
        
    }
    
    private:
    
    vector<int> LOT(Node *ptr)
    {
        vector<int> ans;
        queue<Node*> q;
        q.push(ptr);
        ans.push_back(ptr->data);
        
        while(!q.empty())
        {
            ptr=q.front();
            q.pop();
            
            if(ptr->left)
            {
                ans.push_back(ptr->left->data);
                q.push(ptr->left);
            }
            if(ptr->right)
            {
                ans.push_back(ptr->right->data);
                q.push(ptr->right);
            }
        }
        
        return ans;
    }



    /* ---- LeetCode --- */
    class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> v1,v2;
        v1=LOT(p);
        v2=LOT(q);
        
        if(v1.size()!=v2.size()) return false;
        
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]!=v2[i]) return false;
        }
        
        return true;
    }
    
    private:
    
    vector<int> LOT(TreeNode* ptr)
    {
        vector<int> ans;
        queue<TreeNode*> q;
        

             if(!ptr) return ans;
        q.push(ptr);
        ans.push_back(ptr->val);
        
       while(!q.empty())
       {
           ptr=q.front();
           q.pop();
           
           if(ptr->left)
           {
               ans.push_back(ptr->left->val);
               q.push(ptr->left);
           }
          else
          {
              ans.push_back(-1);
             }
           if(ptr->right)
           {
               ans.push_back(ptr->right->val);
               q.push(ptr->right);
               
           }
           else
           {
              ans.push_back(-1);
           }
       }
        
        return ans;
    }
};