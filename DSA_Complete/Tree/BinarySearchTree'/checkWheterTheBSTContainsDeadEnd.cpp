//--> Naive Approcah

void inorder(Node* ptr,vector<int> &in)
{
    if(!ptr) return;
    inorder(ptr->left,in);
    in.push_back(ptr->data);
    inorder(ptr->right,in);
}

void leafNodes(Node* ptr, vector<int> &leaf)
{
    if(!ptr) return;
    leafNodes(ptr->left,leaf);
    if(!ptr->left && !ptr->right) leaf.push_back(ptr->data);
    leafNodes(ptr->right,leaf);
}

bool isThere(int data , vector<int> v)
{
    for(auto A:v) if(data==A) return true;
    return false;
}


bool isDeadEnd(Node *root)
{
    if(!root) return 0;
    
    vector<int> leaf;
    leafNodes(root,leaf);
    
    vector<int> in;
    inorder(root,in);
    
    for(auto data : leaf) 
    {
        if(data==1 && isThere(2,in)) return 1;
    }
    
    for(int i=1;i<in.size()-1;i++)
    {
        if(in[i]-1 == in[i-1] && in[i]+1 == in[i+1])
        {
            if(isThere(in[i],leaf)) return 1;
        }
    }
    
    return 0;
}

//Optimesed

void check(Node* root, int min, int max, bool &ans)
{
    if(!root) return;
    check(root->left, min,root->data-1,ans);
    if(min == max) ans=true;
    check(root->right,root->data+1,max,ans);
}

bool isDeadEnd(Node *root)
{
    if(!root) return 0;
    bool ans=0;
    check(root,1,INT_MAX,ans);
    
    return ans;
}