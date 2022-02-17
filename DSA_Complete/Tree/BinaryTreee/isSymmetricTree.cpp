class Solution {
    private:
    
    void LOT(TreeNode* ptr,vector<int> &v,int dir)
    {
        queue<TreeNode*> q;
        q.push(ptr);
        v.push_back(ptr->val);
        
        if(dir==1)
        {
         while(!q.empty())
         {
           TreeNode* ptr=q.front();
             q.pop();
             
             if(ptr->left)
             {
                v.push_back(ptr->left->val);
                 q.push(ptr->left);
             }
             else
                {
                    v.push_back(-1);
                }
             if(ptr->right)
             {
                 v.push_back(ptr->right->val);
                 q.push(ptr->right);
             }
             else
                {
                    v.push_back(-1);
                }
         }
        }
        else
        {
            while(!q.empty())
         {
            TreeNode* ptr=q.front();
             q.pop();
             
             if(ptr->right)
             {
                v.push_back(ptr->right->val);
                 q.push(ptr->right);
             }
                else
                {
                    v.push_back(-1);
                }
             if(ptr->left)
             {
                 v.push_back(ptr->left->val);
                 q.push(ptr->left);
             }
                else
                {
                    v.push_back(-1);
                }
         }
        }
    }
    
    void Display(vector<int> v)
    {
        for(auto A: v)
        {
            cout<<A<<" ";
        }
        cout<<endl;
    }
public:
    bool isSymmetric(TreeNode* root) {
        
        if(!root || root->left && !root->right || !root->left && root->right) return false;
        
        if(root->left && root->right)
        {
            vector<int> left,right;
           LOT(root->left,left,1);
           LOT(root->right,right,0);
            
            Display(left);
            Display(right);
            
            
            
                return left==right;
            
            }
        
        return true;
    }
};


//////

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    private:
    bool ans=true;
    void trav(TreeNode* ptr, TreeNode* qtr)
    {
        if(!ptr && !qtr) return;
        if(!ptr || !qtr)
        {
            ans=false;
            return;
        }
            if(ptr->val != qtr->val) ans=false;
        trav(ptr->left,qtr->left);
        trav(ptr->right,qtr->right);
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        trav(p,q);
        return ans;
    }
};

////

bool isSameTree(Node* p, Node* q)
{
    if(!p && !q) return q->val==p->val;
    return (p->val,q->val) && isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
}