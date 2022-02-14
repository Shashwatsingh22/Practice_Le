vector<int> InOrder(treeNode *t)
{
    vectro<int> ans;
    if(!t) return ans;

     stack<Node*> st;
     Node* ptr=t;

        while(t!=NULL || !st.empty())
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
                ans.push_back(ptr->data);
                ptr=ptr->right;
            }
        }
    
    return ans;
}