class Solution {
    private:
    int postInd=0;
    
    TreeNode* crT(vector<int> in,vector<int> pos,int inSt,int inEnd)
    {
        if(inSt>inEnd) return NULL;
        
        TreeNode* ptr=new TreeNode(pos[postInd]);
        postInd--;
        
        if(postInd<0) return ptr;
        
        int part=0;
        for(int i=0;i<in.size();i++)
        {
            if(ptr->val==in[i])
            {
                part=i;
                break;
            }
        }
        
        ptr->right=crT(in,pos,part+1,inEnd);
        ptr->left=crT(in,pos,inSt,part-1);
        
        return ptr;
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
     
        if(inorder.size()==0 && inorder==postorder)
        {
            TreeNode* root= new TreeNode(inorder[0]);
            return root;
        }
        postInd=postorder.size()-1;
        return crT(inorder,postorder,0,inorder.size()-1);
    }
};