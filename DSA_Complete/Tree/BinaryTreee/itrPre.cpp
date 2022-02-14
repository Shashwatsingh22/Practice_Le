vector<int> PreOrder(treeNode *root)
{
    vector<int> ans;
    if(!root) return ans;

   stack<Node*> s;
   Node* ptr=root;

   while(!s.empty() || ptr)
   {
       if(ptr)
       {
           ans.push_back(ptr->data);
           s.push(ptr);
           ptr=ptr->left;
       }
       else
       {
           ptr=s.top();
           s.pop();
           ptr=ptr->right;
       }
   }
   return ans;
}
