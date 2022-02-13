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
/////////////

class Solution {
  public:
  
    int solve(Node* node)
    {
        if(!node) return 0;
        int left=solve(node->left);
        int right=solve(node->right);
        int curr=node->data;
        node->data=left+right;
        return curr+left+right;
        
    }
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *node)
    {
        if(!node || !node->left && !node->right) return;
        solve(node);
        
    }
};