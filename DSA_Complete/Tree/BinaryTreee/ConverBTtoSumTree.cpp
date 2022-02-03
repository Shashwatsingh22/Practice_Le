class Solution {
    private:
    
    int SumOfChild(Node* ptr,int &sum)
    {
        if(!ptr) return sum;
        sum+=ptr->data;
        SumOfChild(ptr->left,sum);
        SumOfChild(ptr->right,sum);
        return sum;
    }
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *node)
    {
        if(!node) return;
        
        int s=0;
        int left=SumOfChild(node->left,s);
        s=0;
        int right=SumOfChild(node->right,s);
        
        node->data=left+right;
        toSumTree(node->left);
        toSumTree(node->right);
    }
};
