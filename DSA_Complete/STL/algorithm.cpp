#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>

using namespace std;

bool compare(int a,int b)
{
    return a>b;
}

void Display(vector<int> v)
{
     for(auto A: v)
    {
        cout<<A<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> v{40,60,-100,80,10,-10};

    sort(v.begin(),v.end());
    
    Display(v);
    
    cout<<binary_search(v.begin(),v.end(),-100)<<endl;
    
    reverse(v.begin(),v.end());
    
    Display(v);
    
    cout<<*max_element(v.begin(),v.end())<<endl;
    
    cout<<accumulate(v.begin(),v.end(),0)<<endl; //numeric  => sum=0
    
    //V1 = {1,2,3}  V2 = {4,5,6}  ==> v1 = ans = {1,2,3,4,5,6}
    vector<int> v1,v2;
    v1={1,2,3};
    v2={4,5,6};
    
    
    v1.insert(v1.end(),v2.begin(),v2.end());
    
    Display(v1);
    
    cout<<v1.size()<<endl;
    
    ////////////////////////////////////////////////////////////////////////
    vector<vector<int>> v4{{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
    
    //vector<int> v5{1,2,3,4};
    //vector<int> v6{1,2};
    
    //v4.push_back(v5);
    //v4.push_back(v6);
    cout<<v4.size()<<endl;
   for(int i=0;i<v4.size();i++)
   {
      Display(v4[i]);
   }
    ///////////////////////////////////////////////////////////////////////
    
  
}