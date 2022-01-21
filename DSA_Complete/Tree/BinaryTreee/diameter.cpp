int height(TreeNode *ptr)
 {
    if(!ptr)  return 0;
    
     return 1+max(height(ptr->left),height(ptr->right));
 }
    
    
    
    int diameterOfBinaryTree(TreeNode* root) {
              
       int Max = INT_MIN;
       int sum=0;
       TreeNode *ptr=root;
       
       stack <TreeNode*> st;
       
       while(ptr ||  !st.empty())
       {
           if(ptr)
           {
               sum=height(ptr->left)+height(ptr->right);
               //cout<<ptr->val<<" "<<sum<<endl;
               Max=max(Max,sum);
               
               st.push(ptr);
               ptr=ptr->left;
               
           }
           else
           {
               ptr=st.top();
               st.pop();
               ptr=ptr->right;
           }
       }
       
       return Max;    
    
    }



    /*---------------------------------------------*/

       int height(Node *ptr)
 {
    if(!ptr)  return 0;
    
     return 1+max(height(ptr->left),height(ptr->right));
 }
    

    
    int diameter(Node* root) {
        // Your code here
        
       int Max = INT_MIN;
       int sum=0;
       Node *ptr=root;
       
       stack <Node*> st;
       
       while(ptr ||  !st.empty())
       {
           if(ptr)
           {
               sum=height(ptr->left)+height(ptr->right)+1;
               //cout<<ptr->data<<" "<<sum<<endl;
               Max=max(Max,sum);
               
               st.push(ptr);
               ptr=ptr->left;
               
           }
           else
           {
               ptr=st.top();
               st.pop();
               ptr=ptr->right;
           }
       }
       
       return Max;
    }