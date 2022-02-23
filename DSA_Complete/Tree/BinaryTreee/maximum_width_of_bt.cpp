//LeetCode--> Here We Are taking those elements also which arr NULL which are at the same level
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        long long width=0;
        queue<pair<long long, TreeNode*>> q;
        q.push({0,root});
        
        while(!q.empty())
        {
            int size=q.size();
            long long minInd=q.front().first;
            
            long long firstInd, lastInd;
            for(int i=0;i<size;i++)
            {
              long long currInd=q.front().first-minInd;
              TreeNode* ptr=q.front().second;
                q.pop();
                if(i==0) firstInd=currInd;
                if(i==size-1) lastInd=currInd;
                if(ptr->left) q.push({currInd*2+1,ptr->left});
                if(ptr->right) q.push({currInd*2+2,ptr->right});
            }
            width=max(width,lastInd-firstInd+1);
        }
        return width;
        
    }
};
//GFG --> Under this they are asking for only those nodes which are at this time present
        // at the same level


      class Solution {
  public:
    // Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root) {

        if(!root) return 0;
        int width=0;
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            width=max(width,size);
            
            for(int i=0;i<size;i++)
            {
            Node* ptr=q.front();
            q.pop();
            
            if(ptr->left) q.push(ptr->left);
            if(ptr->right) q.push(ptr->right);
            }
                
            }
        return width;
    }
};
  