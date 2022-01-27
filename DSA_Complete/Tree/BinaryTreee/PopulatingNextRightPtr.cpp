class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return NULL;
        
        queue<Node*> q;
        q.push(root);
        
        root->next=NULL;
        
        while(1)
        {
            int Size=q.size();
            
            if(!Size) return root;
           
            while(Size>0)
            {
                 Node* ptr=q.front();
                q.pop();
                
                if(ptr->left && ptr->right)
                {
                    ptr->left->next=ptr->right;
                    q.push(ptr->left);
                    q.push(ptr->right);
                }
                
                Size--;
                if(Size!=0 && ptr->left && q.front()->left && ptr->right)
                {
                   
                       cout<<ptr->right->val<<" "<<q.front()->left->val<<endl;
                       ptr->right->next=q.front()->left;
                }
                if(Size==0 && ptr->right) ptr->right->next=NULL;
                
            }
            
        }
        return root;
    }
};