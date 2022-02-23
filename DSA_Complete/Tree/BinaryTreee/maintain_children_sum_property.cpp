void changeTree(BinaryTreeNode < int > * root) {
    if(!root) return;
    
    //these Steps for the forward direction (to maintain the children then root)
    int child=0;
    if(root->left) child+=root->left->data;
    if(root->right) child+=root->right->data;
    
    if(child>=root->data) root->data=child;
    else
    {
        if(root->left) root->left->data=root->data;
        if(root->right) root->right->data=root->data;
    }
    changeTree(root->left);
    changeTree(root->right);
    //this step for backward direction(to maintain the root data)
    
    int curr=0;
    if(root->left) curr+=root->left->data;
    if(root->right) curr+=root->right->data;
    if(root->left || root->right) root->data=curr;
}  