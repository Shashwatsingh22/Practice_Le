class Solution {
    private:
    int preOrdInd=0;
    
    TreeNode* createTree(vector<int> &p,vector<int> &q,int inOrdStInd, int inOrdEndInd)
    {
        if(inOrdStInd>inOrdEndInd) return NULL;
        
        TreeNode* ptr = new TreeNode(p[preOrdInd]);
        preOrdInd++;
        
        int part=0;
        
        for(int i=0;i<q.size();i++)
        {
            if(ptr->val==q[i])
            {
              part=i;
                break;
            }
        }
        
        ptr->left=createTree(p,q,inOrdStInd,part-1);
        ptr->right=createTree(p,q,part+1,inOrdEndInd);
        
        return ptr;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        if(preorder.size()==1 && inorder.size()==1 && preorder==inorder)
        {
            TreeNode* root = new TreeNode(inorder[0]);
            return root;
        }
        
       return createTree(preorder,inorder,0,inorder.size()-1);
    }
};