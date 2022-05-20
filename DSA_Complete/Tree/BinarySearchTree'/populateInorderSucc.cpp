void populateNext(Node *root)
    {
        stack<Node*> st;
        
        Node* prev=NULL;
        Node* ptr=root;
        
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
                
                if(prev) prev->next=ptr;
                prev=ptr;
                
                ptr=ptr->right;
            }
        }
        return;
    }