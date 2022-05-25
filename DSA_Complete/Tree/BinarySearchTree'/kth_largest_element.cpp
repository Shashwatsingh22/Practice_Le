//Method 1
class Solution
{
    void numOfNodes(Node* root,int &num)
    {
        if(!root) return;
        numOfNodes(root->left, num);
        num++;
        numOfNodes(root->right,num);
    }
    
    public:
    int kthLargest(Node *root, int K)
    {
        if(!root) return -1;
        
         int num=0;
         numOfNodes(root,num);
         int iterate  = num-K;
         
         stack<Node*> st;
         Node* ptr=root;
         int i=0;
         
         while(ptr || !st.empty())
         {
             if(ptr)
             {
                 st.push(ptr);
                 ptr=ptr->left;
             }
             else
             {
                 ptr=st.top();
                 st.pop();
                 if(i==iterate) return ptr->data;
                 //cout<<ptr->data;
                 i++;
                 ptr=ptr->right;
             }
         }
         
         return -1;
    }
};

//Method 2
int kthLargest(Node *root, int k)
{
        if(!root) return -1;
        stack<Node*> st;
         Node* ptr=root;
         int i=0;
         
         while(ptr || !st.empty())
         {
             if(ptr)
             {
                 st.push(ptr);
                 ptr=ptr->right;
             }
             else
             {
                 ptr=st.top();
                 st.pop();
                 if(i==k-1) return ptr->data;
                 //cout<<ptr->data;
                 i++;
                 ptr=ptr->left;
             }
         }
         
         return -1;
    
}