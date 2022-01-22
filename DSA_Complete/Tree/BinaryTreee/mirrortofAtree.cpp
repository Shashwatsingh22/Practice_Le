void mirror(Node* node) {
        
        queue <Node*> q;
        
        q.push(node);
        
        while(!q.empty())
        {
            Node *ptr=q.front();
            q.pop();
            Node* temp=NULL;
            
            if(ptr->left and ptr->right)
            {
               temp=ptr->left;
               ptr->left=ptr->right;
               ptr->right=temp;
               q.push(ptr->left);
               q.push(ptr->right);
            }
            else if(ptr->left && ptr->right==NULL)
            {
               
               ptr->right=ptr->left;
               ptr->left=NULL;
                
               
               q.push(ptr->right);
            }
            else if(ptr->right && ptr->left==NULL)
            {
                ptr->left=ptr->right;
                ptr->right=NULL;
                q.push(ptr->left);
            }
            else
            {
                continue;
            }
            
        }