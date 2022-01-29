vector<int> diagonal(Node *root)
{
    vector<int> ans;
   if(!root) return ans;
   
   queue<Node*> q;
   q.push(root);
 
 while(!q.empty())
 {
       Node* ptr=q.front();
         q.pop();
       while(true)
       {
         ans.push_back(ptr->data);
           
         if(ptr->left) q.push(ptr->left);
         
         if(ptr->right)
         {
             ptr=ptr->right;
         }
         else
         {
             break;
         }
         
       }
 } 
   return ans;
}