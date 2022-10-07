class Solution{
public:
    void solve(string ip, string op, vector<string> &v)
    {
        if(!ip.length())
        {
            v.push_back(op);
            return;
        }
        
        //Not Add Space
        string op1=op;
        //Add Space
        string op2=op;
        op2+=" ";
        op2+=ip[0];
        //op2.push_back(" "+ip[0]);
        op1+=ip[0];
        ip.erase(ip.begin()+0);
        solve(ip,op1,v);
        solve(ip,op2,v);
    }
    
    vector<string> permutation(string S){
        
        vector<string> ans;
        if(!S.length()) return ans;
        
        
        string op="";
        op+=S[0];
        S.erase(S.begin()+0);
        string ip=S;
        solve(ip,op,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};