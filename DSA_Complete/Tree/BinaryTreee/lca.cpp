class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        vector<TreeNode*> p1,p2;
        
        if(!root) return NULL;
        
        if(!path(p1,root,p) || !path(p2,root,q)) return NULL;
        
        TreeNode* ans = NULL;
        
        for(int i=0;i<p1.size() && i<p2.size();i++)
        {
           if(p1[i]==p2[i])
           {
              ans=p1[i]; 
           }
        }
        
        // for(auto ptr : p1)
        // {
        //    cout<<ptr->val<<" "; 
        // }
        // cout<<endl;
        
        return ans;
            
    }
  private:
    bool path(vector<TreeNode*> &v, TreeNode* ptr,TreeNode* check)
    {
        if(!ptr) return false;
        
        v.push_back(ptr);
        
        if(ptr==check) return true;
        
        if(path(v,ptr->left,check) || path(v,ptr->right,check)) return true;
        
        v.pop_back();
        return false;
    }
};