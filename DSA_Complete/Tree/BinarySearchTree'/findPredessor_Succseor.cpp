void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{

   if(!root) return;
   Node *ptr=root;
   
   while(ptr)
   {
       if(ptr->key==key)
       {
           if(ptr->left || ptr->right)
           {
               
               if(ptr->left)
               {
                   Node* temp=ptr->left;
                   while(temp->right) temp=temp->right;
                   pre=temp;
               }
               if(ptr->right)
               {
                  Node* temp=ptr->right;
                  while(temp->left) temp=temp->left;
                  suc=temp;
               }
           }
           break;
       }
       else if(ptr->key>key)
       {
           suc=ptr;
           ptr=ptr->left;
       }
       else
       {
           pre=ptr;
           ptr=ptr->right;
       }
   }
 return;
}