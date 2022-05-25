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

    void inorder(TreeNode* ptr, map<int,int> &m)
    {
       if(!ptr) return;
        inorder(ptr->left,m);
        m[ptr->val]++;
        inorder(ptr->right,m);
    }
    
   static bool compareSecond(pair<int,int> &p1, pair<int,int> &p2)
    {
        return p1.second>p2.second;
    }
    
public:
    vector<int> findMode(TreeNode* root) {
        
        if(!root->left && !root->right)
        {
            vector<int> ans;
            ans.push_back(root->val);
            return ans;
        }
        
        map<int,int> hash;
        inorder(root, hash);
        
        vector<pair<int,int>> A;
        
        for(auto &itr : hash)
        {
            A.push_back(itr);
        }
        
        sort(A.begin(), A.end() , compareSecond);
        
        int maxOcc = A[0].second;
         vector<int> ans;
        
        for(auto itr : A)
        {
            if(maxOcc == itr.second) ans.push_back(itr.first);
        }
        
        return ans;
        
    }
};