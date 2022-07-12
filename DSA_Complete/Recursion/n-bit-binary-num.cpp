class Solution{
//     bool isValid(string data)
// {
//   //cout<<data.length();
   
//   if(data.length()==0) return true;
   
//   int ones=0;
//   int zeros=0;
//   for(int i=0;i<data.length();i++)
//   {
//         if(data[i]=='1') ones++;
//         else if(data[i]=='0') zeros++;
//   }
//   if(ones<zeros) return false;
//   data=data.substr(0, data.size()-1);
//   return isValid(data);
// }

bool isValid(string data)
{
    int ones=0;
    int zeros=0;
    
    for(int i=0;i<data.length();i++)
    {
        if(data[i]=='1') ones++;
        else if(data[i]=='0') zeros++;
    }
    
    if(zeros>ones) return false;
    
    return true;
}

void solve(int ones,int zero,int n,string op,vector<string> &ans)
{
//     cout<<n<<endl;
     if(!n)
     { 
        //  if(isValid(op)) 
         ans.push_back(op);
          return;
     }
     
     if(!ones && !zero)
     {
          op.push_back('1');
          ones++;
          n--;
          solve(ones,zero,n,op,ans);
     }
     else
     {
          string op1=op;
          string op2=op;
          
          int zero1=zero;
          int ones1=ones;
          
          op1.push_back('0');
          zero1++;
          
          op2.push_back('1');
          ones1++;
          
          n--;
          
          if(isValid(op1)) solve(ones,zero1,n,op1,ans);
          solve(ones1,zero,n,op2,ans);
     }
     return;
}
public:	
	vector<string> NBitBinary(int N)
	{
	    vector<string> ans;
	    if(!N) return ans;
     
     
     string op = "";
     solve(0,0,N,op,ans);
     reverse(ans.begin(),ans.end());
     return ans;
	}
};