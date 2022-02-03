class Solution{
    private:
    int preInd=0;
    int size=0;
    
    Node* soln(int stIn, int lIn,int in[],int pre[])
    {
      if(stIn>lIn) return NULL;
      
      Node* ptr=new Node(pre[preInd]);
      preInd++;
      
      int part=0;
      for(int i=stIn;i<=lIn;i++)
      {
          if(ptr->data==in[i]) 
          {
              part=i;
              break;
          }
      }
      ptr->left=soln(stIn,part-1,in,pre);
      ptr->right=soln(part+1,lIn,in,pre);
      
      return ptr;
    }
    
    
    public:
    Node* buildTree(int in[],int pre[], int n)
    {
        if(n==1)
        {
            return new Node(in[0]);
        }
        
        size=n;
        return soln(0,n-1,in,pre);
    }
};