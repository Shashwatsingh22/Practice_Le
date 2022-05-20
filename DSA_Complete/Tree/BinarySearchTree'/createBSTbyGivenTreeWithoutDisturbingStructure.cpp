class Solution{
     
     void inorder(Node* root,vector<int> &in)
     {
         if(!root) return;
         inorder(root->left,in);
         in.push_back(root->data);
         inorder(root->right,in);
     }
     
     void create(Node* root,int &i,vector<int> in)
     {
         if(!root) return;
         create(root->left,i,in);
         if(i!=in.size()) root->data=in[i++];
         create(root->right,i,in);
     }
     
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    Node *binaryTreeToBST (Node *root)
    {
        if(!root) return root;
        
        vector<int> in;
        inorder(root,in);
        sort(in.begin(),in.end());
        int i=0;
        create(root,i,in);
        return root;
    }
    
};