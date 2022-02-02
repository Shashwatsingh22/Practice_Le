class Solution
{
    
    private:
    
    void convert2Dll(Node* root,Node* &prev, int &i,Node* &head)
    {
        if(!root) return;
        convert2Dll(root->left,prev,i,head);
        
        if(i==1)
        {
           head=root;
           prev=root;
           i=0;
        }
        else
        {
          prev->right=root;
          prev->right->left=prev;
          prev=root;
        }
        convert2Dll(root->right,prev,i,head);
    }
    public: 
    //Function to convert binary tree to doubly linked list and return it.
    Node * bToDLL(Node *root)
    {
        Node* head=NULL;
        
        if(!root) return head;
        
        int i=1;
        Node* prev=NULL;
        convert2Dll(root,prev,i,head);
        return head;
    }
};
