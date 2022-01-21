 int lheight(Node *ptr)
    {
        if(!ptr) return 0;
        
        else 
        {
            return lheight(ptr->left)+1;
        }
    }
    
    int rheight(Node *ptr)
    {
        if(!ptr) return 0;
        
        else 
        {
            return rheight(ptr->right);
        }
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
               sum=rheight(ptr)+lheight(ptr)-1;
               cout<<ptr->data<<" "<<sum<<endl;
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