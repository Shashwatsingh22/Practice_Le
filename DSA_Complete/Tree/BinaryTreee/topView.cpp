class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        
        vector<int> ans;
        
        if(!root) return ans;
        
        map<int,int> m;
        queue<pair<Node*,int>> q;
        
        q.push({root,0});
        
        while(!q.empty())
        {
            auto ptr=q.front();
            q.pop();
            
            Node* qtr=ptr.first;
            int verLine=ptr.second;
            
            if(m.find(verLine) == m.end()) m[verLine] = qtr->data;
            
            if(qtr->left)
            {
                q.push({qtr->left,verLine-1});
            }
            if(qtr->right)
            {
                q.push({qtr->right,verLine+1});
            }
        }
        
        // for(int i=0;i<m.size();i++)
        // {
        //     ans.push_back(m[i]);
        // }
        for(auto itr : m)
        {
            ans.push_back(itr.second);
        }
        return ans;
    }

};