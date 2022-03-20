class Solution{
    priavte:
      int findLeft(Node* ptr)
      {
            if(!ptr) return 0;
            int height=0;
            while(ptr)
            {
                height++;
                ptr=ptr->left;
            }
            return ptr;
      }
      int findRight(Node* qtr)
      {
          if(!ptr) return 0;
          int height=0;
          while(ptr)
          {
              height++;
              ptr=ptr->right;
          }
          return height;
      }

    public:
    int countNumberOfNodes(Node* root)
    { 
      if(!root) return 0;
      int lh=findLeft(root);
      int rh=findRight(root);

      if(lh==rh) return pow(2,lh)+1;

      return 1+countNumberOfNodes(root->left)+countNumberOfNodes(root->right);
    }
}