class Solution {
  public:
    vector <int> bottomView(Node *root) {
        
        vector<int> ans;
        
        if(!root) return ans;
        
        map<int,int> m;
        queue<pair<Node*, int>> q;
        
        q.push({root,0});
        
        while(!q.empty())
        {
            auto itr=q.front();
            q.pop();
            
            Node* ptr=itr.first;
            int verLine=itr.second;
            
            m[verLine] = ptr->data;
            
            if(ptr->left) q.push({ptr->left,verLine-1});
            if(ptr->right) q.push({ptr->right,verLine+1});
            
        }
        
        for(auto A: m)
        {
            ans.push_back(A.second);
        }
        
        return ans;
        // Your Code Here
    }
};