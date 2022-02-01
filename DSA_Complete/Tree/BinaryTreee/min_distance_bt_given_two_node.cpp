class Solution{
    
    private:
    
    bool path(Node* ptr, vector<int> &v,int val)
    {
        if(!ptr) return false;
        v.push_back(ptr->data);
        
        if(ptr->data == val) return true;
        
        if(path(ptr->left,v,val) || path(ptr->right,v,val)) return true;
        
        v.pop_back();
        return false;
    }
    
    public:
    /* Should return minimum distance between a and b
    in a tree with given root*/
    int findDist(Node* root, int a, int b) {
        int ans;
        if(!root) return ans;
        
        vector<int> p1,p2;
        path(root,p1,a);
        path(root,p2,b);
        
        int count=0;
        for(int i=0;i<p1.size()&&i<p2.size();i++)
        {
            if(p1[i]==p2[i]) count++;
        }
        //cout<<p1.size()<<endl;
         ans=p1.size()-count+p2.size()-count;
        //cout<<ans<<endl;
        return ans;
    }
};