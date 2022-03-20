BinaryTreeNode<int>* findExtLeftNode(BinaryTreeNode<int>* ptr)
{
    if(!ptr->left) return ptr;
     return findExtLeftNode(ptr->left);
}

BinaryTreeNode<int>* util(BinaryTreeNode<int>* ptr)
{
    if(!ptr->left) return ptr->right;
    else if(!ptr->right) return ptr->left;
    
    BinaryTreeNode<int>* leftPtr=ptr->left;
    BinaryTreeNode<int>* rightNodeExtLeft=findExtLeftNode(ptr->right);
    rightNodeExtLeft->left=ptr->left;
    return ptr->right;
}



BinaryTreeNode<int>* deleteNode(BinaryTreeNode<int>* root, int key){
    if(!root) return root;
    if(root->data==key) return util(root);
    
    BinaryTreeNode<int>* temp=root;
    while(temp)
    {
        if(temp->data>key)
        {
            if(temp->left && temp->left->data==key)
            {
                temp->left=util(temp->left);
                break;
            }
            else temp=temp->left;
        }
        else
        {
            if(temp->right && temp->right->data==key)
            {
                temp->right=util(temp->right);
                break;
            }
            else temp=temp->right;
        }
    }
    
    return root;
}