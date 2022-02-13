class Solution
{
    private:
    int  sumTree(Node* ptr,int &sum)
    {
        if(!ptr) return 0;
        sum+=ptr->data;
        sumTree(ptr->left,sum);
        sumTree(ptr->right,sum);
        
        return sum;
    }
    public:
    bool isSumTree(Node* ptr)
    {
        if(!ptr || !ptr->left && !ptr->right) return true;
       int sum=0;
       int left=sumTree(ptr->left,sum);
       sum=0;
       int right=sumTree(ptr->right,sum);
       
       if(ptr->data!=left+right) return false;
       
       isSumTree(ptr->left);
       isSumTree(ptr->right);
       
       return true;
    }
    
};