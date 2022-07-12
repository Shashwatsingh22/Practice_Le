class Solution {
    void solve(int open,int close,string op,vector<string> &ans)
    {
        if(!open && !close)
        {
            ans.push_back(op);
            return;
        }
        if(open==close)
        {
            string op1=op;
            op1.push_back('(');
            open--;
            solve(open,close,op1,ans);
        }
        else if(!open && close)
        {
            string op1=op;
            op1.push_back(')');
            close--;
            solve(open,close,op1,ans);
        }
        else
        {
           string op1=op;
           string op2=op;
           
           int open1=open;
           int close1=close;
           
           op1.push_back('(');
           open1--;
           op2.push_back(')');
           close1--;
            
           solve(open1,close,op1,ans);
           solve(open,close1,op2,ans);
        }
        
        return;
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        if(n==0) return v;
        string op="";
        solve(n,n,op,v);
        
        return v;
    }
};