d /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right)
 * };
 */
class BSTIterator {
    private : 
     stack<TreeNode*> st;
    
     void pushAllLeft(TreeNode* ptr)
     {
         while(ptr)
         {
             st.push(ptr);
             ptr=ptr->left;
         }
     }
public:
    BSTIterator(TreeNode* root) {
        pushAllLeft(root);
    }
    
    int next() {
      TreeNode* ptr=st.top();
        st.pop();
        if(ptr->right) pushAllLeft(ptr->right);
        return ptr->val;
    }
    
    bool hasNext() {
        return !st.empty();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */