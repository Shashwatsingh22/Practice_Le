/*
Children Sum Parent
Given a Binary Tree. Check whether all of its nodes have 
the value equal to the sum of their child nodes.
*/

int isSumProperty(Node *root)
    {
        if((!root) || (!root->left) && (!root->right)) return 1;
        
        queue<Node*> q;
        Node* ptr=root;
        q.push(ptr);
        
        while(!q.empty())
        {
            //cout<<"In"<<endl;
            ptr=q.front();
            q.pop();
            
            int sum_of_child=0;
            
            if(ptr->left)
            {
                sum_of_child+=ptr->left->data;
                q.push(ptr->left);
            }
            
            if(ptr->right)
            {
                sum_of_child+=ptr->right->data;
                q.push(ptr->right);
            }
            
            if(ptr->left==NULL && ptr->right==NULL)
            {
                //cout<<"Here"<<endl;
              continue;    
            }
            
            //cout<<sum_of_child<<endl;
            
            if(ptr->data != sum_of_child)
            {
                return 0;
            }
        }
        
        return 1;
    }