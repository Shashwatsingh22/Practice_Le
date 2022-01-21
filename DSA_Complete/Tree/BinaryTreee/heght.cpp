int height(struct Node* node){
        int x=0,y=0;
        // code here 
        if(!node)
        {
            return 0;
        }
            x=height(node->left);
            y=height(node->right);
            if(x > y)
            {
                return x+1;
            }
            else
            {
                return y+1;
            }
        
        
    }

     int height(struct Node* node){
        if(node)
        {
          if(height(node->left)>height(node->right))
          {
              return height(node->left)+1;
          }
          else
          {
              return height(node->right)+1;
          }
        }
        
        else
        {
            return 0;
        }
    }