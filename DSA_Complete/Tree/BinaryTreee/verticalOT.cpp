class Solution
{
    public:
    vector<int> verticalOrder(Node *root)
    {
        vector<int> ans;
       if(!root) return ans;
       
       queue<pair<Node*,int>> q;
       map<int,vector<int>> m;
       
       q.push({root,0});
       
       while(!q.empty())
       {
           auto tmp = q.front();
           q.pop();
           
           Node* ptr=tmp.first;
           int line=tmp.second;
           
           m[line].push_back(ptr->data);
           
           if(ptr->left) q.push({ptr->left,line-1});
           if(ptr->right) q.push({ptr->right,line+1});
       }
       for(auto A: m)
       {
           ans.insert(ans.end(),A.second.begin(),A.second.end());
       }
       
       return ans;
    }
};