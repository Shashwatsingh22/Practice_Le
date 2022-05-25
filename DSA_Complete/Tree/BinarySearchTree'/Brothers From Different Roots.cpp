/* Question Link
https://practice.geeksforgeeks.org/problems/brothers-from-different-root/1#

*/

class BSTitr{
  
  stack<Node*> st;
  int left=0;
  
  void pushAllLeft(Node* ptr)
  {
      while(ptr)
      {    st.push(ptr);
          ptr=ptr->left;
      }
  }
  
  void pushAllRight(Node* ptr)
  {
      while(ptr)
      {
          st.push(ptr);
          ptr=ptr->right;
      }
  }
  
  public:
     BSTitr(Node* root , int l)
     {
         left=l;
         if(left) pushAllLeft(root);
         else pushAllRight(root);
     }
     
     int next()
     {
         if(st.empty()) return -1;
         
         Node* ptr = st.top();
         
         st.pop();
         
         if(ptr->right && left) pushAllLeft(ptr->right);
         if(ptr->left && !left) pushAllRight(ptr->left);
         
         return ptr->data;
     }
    
};

class Solution
{
    
public:
    int countPairs(Node* root1, Node* root2, int x)
    {
        
        BSTitr first(root1,1),last(root2,0);
        
        int fnum=first.next();
        int lnum=last.next();
        
        
        
        int count=0;
        
        while(fnum != -1 && lnum != -1)
        {
   
            if(lnum+fnum > x) lnum=last.next();
            
            else if(lnum+fnum < x) fnum = first.next();
            
            else
            {
                count++;
                lnum=last.next();
                fnum=first.next();
                
            }
        }
        
        return count;
    }
};


/* LeetCode 
   https://leetcode.com/problems/two-sum-iv-input-is-a-bst
*/

class Solution {

    class BstItr{
        stack<TreeNode*> st;
        int left=0;
        
        void pushAllLeft(TreeNode* ptr)
        {
            while(ptr)
            {
                st.push(ptr);
                ptr=ptr->left;
            }
        }
        
        void pushAllRight(TreeNode* ptr)
        {
        while(ptr)
        {
           st.push(ptr);
            ptr=ptr->right;
        }
        }
        
        public:
           BstItr(TreeNode* root, int left)
           {
               this->left=left;
               if(left) pushAllLeft(root);
               else pushAllRight(root);
           }
        
        int next()
        {
            if(st.empty()) return -1;
            TreeNode* ptr=st.top();
            st.pop();
            
            if(ptr->right && left) pushAllLeft(ptr->right);
            else if(ptr->left && !left) pushAllRight(ptr->left);
            
            return ptr->val;
        }
     };
    
    public:
    bool findTarget(TreeNode* root, int k) {
        BstItr first(root,1),last(root,0);
        
        int fnum=first.next();
        int lnum=last.next();
        
        while(fnum < lnum)
        {
            if(fnum+lnum>k) lnum=last.next();
            else if(fnum+lnum<k) fnum=first.next();
            
            else return true;
        }
        return false;
    }
};