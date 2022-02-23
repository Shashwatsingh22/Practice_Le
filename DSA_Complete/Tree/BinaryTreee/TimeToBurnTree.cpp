/************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) 
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include<unordered_map>
#include<map>

BinaryTreeNode<int>* findParent(unordered_map<BinaryTreeNode<int>*,BinaryTreeNode<int>*> &m, BinaryTreeNode<int> *root,int start)
{
    BinaryTreeNode<int>* ans;
    queue< BinaryTreeNode<int>* > q;
    q.push(root);
    
    while(!q.empty())
    {
      BinaryTreeNode<int> *ptr=q.front();
        q.pop();
        if(ptr->data==start) ans=ptr;
        if(ptr->left)
        {
            m[ptr->left]=ptr;
            q.push(ptr->left);
        }
        if(ptr->right)
        {
            m[ptr->right]=ptr;
            q.push(ptr->right);
		}
     }
    return ans;
}



int timeToBurnTree(BinaryTreeNode<int>* root, int start)
{
    if(!root) return 0;
    BinaryTreeNode<int>* st=NULL;
    unordered_map<BinaryTreeNode<int>*,BinaryTreeNode<int>*> parent;
    st=findParent(parent,root,start);
    
   // if(st) cout<<st->data<<endl;
    if(!st) return 0;
    
    queue<BinaryTreeNode<int>*> q;
    q.push(st);
    
    unordered_map<BinaryTreeNode<int>*,bool> visited;
    
    int time=0;
    while(!q.empty())
    {
        int size=q.size();
        int k=0;
        
        for(int i=0;i<size;i++)
        {
            BinaryTreeNode<int> *ptr=q.front();
            q.pop();
            
            if(ptr->left && !visited[ptr->left])
            {
                k++;
                visited[ptr->left]=true;
                q.push(ptr->left);
            }
            if(ptr->right && !visited[ptr->right])
            {
                k++;
                visited[ptr->right]=true;
                q.push(ptr->right);
            }
            if(parent[ptr] && !visited[parent[ptr]])
            {
                k++;
                visited[parent[ptr]]=true;
                q.push(parent[ptr]);
            }
        }
        if(k>0) time++;
    }
    
    return time;
}
