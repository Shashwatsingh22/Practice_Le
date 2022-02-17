//leetcode --> Saying that you need keep sorded the node data when they are at same level

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        
        if(!root) return ans;
        
        /* Map --> < INDEX < LEVEL , DATA_CONTAINER>  */
        map<int,map<int,multiset<int>>> m;
        /* queue --> <INDEX < LEVEL , ADDRESS >>> */
        queue<pair<int,pair<int,TreeNode*>>> q;
        
        q.push({0,{0,root}});
        int level=-1;
        while(true)
        {
           int Size=q.size();
           if(!Size) break;
           level++;
            while(Size>0)
            {
              auto qtr=q.front();
              q.pop();
              TreeNode* ptr=qtr.second.second;
              int ind=qtr.first;
            
               m[ind][level].insert(ptr->val);
               if(ptr->left) q.push({ind-1,{level,ptr->left}});
               if(ptr->right) q.push({ind+1,{level,ptr->right}});
             
                   Size--;
             }
            //cout<<level<<" ";
        }
        //cout<<endl;
        for(auto temp : m)
        {
            vector<int> tep;
                
            for(auto t : temp.second)
            {
                for(auto Ans:t.second)
                {
                  tep.push_back(Ans);  
                   
                }
                
            }
            ans.push_back(tep);
        }
        
        return ans;
    }
};


//GFG--> Can give correct
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