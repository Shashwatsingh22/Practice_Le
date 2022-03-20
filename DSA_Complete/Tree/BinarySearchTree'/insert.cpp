/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(int val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

TreeNode<int>* insertionInBST(TreeNode<int>* root, int val)
{
    // Write your code here.
    if(!root) 
       {
           root=new TreeNode<int>(val);
           return root;
       }
        
        TreeNode<int>* ptr=root;
        TreeNode<int>* prev=NULL;
        while(ptr)
        {
            if(ptr->val>val)
            {
                prev=ptr;
                ptr=ptr->left;
            }
            else
            {
                prev=ptr;
                ptr=ptr->right;
            }
        }
        
        TreeNode<int> *temp=new TreeNode<int>(val);
        temp->left=temp->right=NULL;
        
        if(prev->val>val) prev->left=temp;
        else prev->right=temp;
        
        return root;
}