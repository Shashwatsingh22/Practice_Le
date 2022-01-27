///My Way by the help of Level Order First and Last Nodes Sum

int verticalWidth(Node* root)
{
    if(!root) return 0;
    if(!root->left && !root->right) return 1;
    
    queue<Node*> q;
    vector<int> v;
    
    v.push_back(root->data);
    q.push(root);
    
    while(1)
    {
       int Size=q.size();
       if(!Size) return v.size();
       
       int StData=0;
       int LtData=0;
       int i=1;
       
       while(Size>0)
       {
           Node* ptr=q.front();
           q.pop();
           
           if(ptr->left)
           {
               if(i==1) { i=0; StData=ptr->left->data;}
               q.push(ptr->left);
           }
           if(ptr->right)
           {
              LtData=ptr->right->data;
              q.push(ptr->right);
           }
           Size--;
       }
       if(StData) v.push_back(StData); 
       if(LtData) v.push_back(LtData);
    }
    
    for(auto A: v)
     {
         cout<<A<<" ";
     }
    return v.size();
}


/// By the Horizantol Way Solnn

//--> root=hd= 0 left = hd-1 ; right=hd+1;

void InOrder(Node* ptr,unordered_set<int> &us, int hd)
{
    if(!ptr) return;
    
    InOrder(ptr->left,us,hd-1);
    us.insert(hd);
    InOrder(ptr->right,us,hd+1);
    
}

int verticalWidth(Node* root)
{
    if(!root) return 0;
    
    unordered_set<int> us;
    InOrder(root,us,0);
    
    return us.size();
    
}
