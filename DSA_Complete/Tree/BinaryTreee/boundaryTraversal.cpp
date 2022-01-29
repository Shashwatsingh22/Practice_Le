class Solution {
    private:
    
    bool isLeaf(Node* ptr)
    {
        if(!ptr->left && !ptr->right ) return true;
        return false;
    }
    
    void leftSide(Node* ptr,vector<int> &v)
    {
        while(ptr)
        {
            if(!isLeaf(ptr)) v.push_back(ptr->data);
            
            if(ptr->left) ptr=ptr->left;
            
            else  ptr=ptr->right;
        }
    }
    
    void leaf(Node* ptr,vector<int> &v)
    {
        if(isLeaf(ptr)) 
        { v.push_back(ptr->data);
        
            return;
        }
        
        if(ptr->left) leaf(ptr->left,v);
        if(ptr->right) leaf(ptr->right,v);
    }
    
    void rightSide(Node* ptr,vector<int> &v)
    {
        stack<int> s;
        
        while(ptr)
        {
            if(!isLeaf(ptr)) s.push(ptr->data);
            
            if(ptr->right) ptr = ptr->right;
            else  ptr=ptr->left;
        }
        
        while(!s.empty())
        {
            v.push_back(s.top());
            s.pop();
        }
    }
    
public:
    vector <int> boundary(Node *root)
    {
      vector<int> ans;
      
      if(!root) return ans;
      
      ans.push_back(root->data);
      
      if(root->left) leftSide(root->left,ans);
      leaf(root,ans);
      if(root->right) rightSide(root->right,ans);
      
      return ans;
    }
};
