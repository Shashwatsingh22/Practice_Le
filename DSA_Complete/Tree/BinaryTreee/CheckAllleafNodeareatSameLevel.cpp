
class Solution{
  public:
    /*You are required to complete this method*/
    bool check(Node *root)
    {
        if(!root) return true;
        
       map<int,vector<int>> m;
       queue<Node*> q;
       
       q.push(root);
       int level=0;
       while(true)
       {
           int Size=q.size();
           if(!Size) break;
           vector<int> v;
           while(Size>0)
           {
               Node* ptr=q.front();
               q.pop();
               int i=0;
               
               if(ptr->left) q.push(ptr->left);
               else i++;
               if(ptr->right) q.push(ptr->right);
               else i++;
               if(i==2) v.push_back(ptr->data);
               Size--;
           }
            if(v.size()) 
            {
                m[level]=v;
                if(level>0) return false;
                level++;
            }
        //   for(auto x:m)
        //   {
        //       cout<<x.first<<" =>";
        //       for(auto y:x.second) cout<<y<<" ";
        //       cout<<endl;
        //   }
           
           
           
       }
       return true;
    }
};