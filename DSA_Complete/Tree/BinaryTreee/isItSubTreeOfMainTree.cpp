//Mine Approach 
class Solution {
public:
    void Display(vector<int> v)
    {
       for(auto A: v) cout<<A<<" ";
        
        cout<<endl;
    }
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
     
        if(!root && !subRoot || !root->left && !root->right && !subRoot->left && !subRoot->right && root==subRoot) return true;
        
       vector<int>main,sub;
        InOrder(root,main);
        InOrder(subRoot,sub);
        
        Display(main);
        Display(sub);
        
        int start=retIndex(main,sub[0]);
        cout<<start<<endl;
        
        if(start!=-1)
        {
           for(int i=start,j=0;i<main.size() && j<sub.size();i++,j++)
           {
              if(main[i] != sub[j]) return false;
           }
        }
        
        return true;
        
        
        
    }
    private:
    int retIndex(vector<int>v,int data)
    {
      for(int i=0;i<v.size();i++)
      {
          if(v[i]==data) return i;
      }
        return -1;
    }
    
    void InOrder(TreeNode* ptr,vector<int> &v)
    {
         if(!ptr) return;
        
        InOrder(ptr->left,v);
         v.push_back(ptr->val);
        InOrder(ptr->right,v);
    }
};

//////////////////////////////////////////////////////////

class Solution {
    bool ans=false;
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
       if(!root && !subRoot) return ans;
        inOrder(root,subRoot);
        
        return ans;
    }
    
    private:
       bool match(TreeNode* root,TreeNode* subRoot)
       {
           if(root && subRoot)
           {
               bool left=match(root->left,subRoot->left);
                   bool right=match(root->right,subRoot->right);
               
               if(left && right && root->val==subRoot->val) return true;
               else return false;
           }
           if(!root && !subRoot) return true;
           else return false;
       }
       
      void inOrder(TreeNode* root, TreeNode* subRoot)
      {
          if(root) 
          {
          
          inOrder(root->left,subRoot);
          bool t=match(root,subRoot);
              if(t) ans=t;
          inOrder(root->right,subRoot);
          }
      }
};