vector<int> leftView(Node *root)
{
   // Your code here
   
   
   vector <int> v;
   if(!root) return v;
        
   queue <Node*> q;
   v.push_back(root->data);
   q.push(root);
   
   while(true)
   {
       int Size=q.size();
       
       if(!Size) return v;
       
       int data=0;
       
       while(Size>0)
       {
          Node *ptr=q.front();
          q.pop();
          if(ptr->right)
         {
             data=ptr->right->data;
             q.push(ptr->right);
         }
         if(ptr->left)
         {
             data=ptr->left->data;
             q.push(ptr->left);
         }
         
         Size--;
       }
       if(data!=0){
       v.push_back(data);}
   }
   return v;
}
