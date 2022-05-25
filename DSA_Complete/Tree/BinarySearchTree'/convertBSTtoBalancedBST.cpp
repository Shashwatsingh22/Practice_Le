void inorder(Node* ptr,vector<int> &in)
{
    if(!ptr) return;
    inorder(ptr->left,in);
    in.push_back(ptr->data);
    inorder(ptr->right,in);
}

Node* create(vector<int> &in, int left ,int right )
{
    if(left>right) return NULL;
   
    int mid = (left+right)/2;
    Node* ptr = new Node(in[mid]);
   
    
    ptr->left=create(in, left,mid-1);
    ptr->right=create(in,mid+1,right);
    
    return ptr;
}

Node* buildBalancedTree(Node* root)
{
    if(!root) return root;
    
	vector<int> in;
	inorder(root,in);
	
	int left=0;
	int right=in.size();
	
	return create(in,0,in.size()-1);
}