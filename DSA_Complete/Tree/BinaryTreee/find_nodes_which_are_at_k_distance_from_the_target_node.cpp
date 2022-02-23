/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    private:
    void parentOfNodes(unordered_map<TreeNode*,TreeNode*> &p,TreeNode* ptr)
    {
        if(!ptr) return;
        queue<TreeNode*> q;
        q.push(ptr);
       while(!q.empty())
        {
           TreeNode* qtr=q.front();
            q.pop();
           
            if(qtr->left) 
            {
                p[qtr->left]=qtr;
                q.push(qtr->left);
            }
                if(qtr->right)
                {
                    p[qtr->right]=qtr;
                    q.push(qtr->right);
                }
        }
    }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int> ans;
        if(!root) return ans;
        unordered_map<TreeNode*,TreeNode*> parent;
        parentOfNodes(parent,root);
        
       
        
        unordered_map<TreeNode*,int> visited;
        queue<TreeNode*> q;
        q.push(target);
        visited[target]=1;
        
        int dis=0;
        
        while(!q.empty())
        {
            int size=q.size();
            if(dis==k) break;
        dis++;
            
            for(int i=0;i<size;i++)
            {
                TreeNode* ptr=q.front();
                q.pop();
                
                if(ptr->left && !visited[ptr->left])
                {
                   visited[ptr->left]=1;
                    q.push(ptr->left);
                }
                
                if(ptr->right && !visited[ptr->right])
                {
                    visited[ptr->right]=1;
                    q.push(ptr->right);
                }
                
                if(parent[ptr] && !visited[parent[ptr]])
                {
                    visited[parent[ptr]]=1;
                    q.push(parent[ptr]);
                }
            }
        }
        
        while(!q.empty())
        {
            ans.push_back(q.front()->val);
            q.pop();
        }
        
        return ans;
    }
};