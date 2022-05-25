
#include <iostream>
#include <algorithm>
#include<vector>
#include<string>
#include<sstream>
#include<map>

using namespace std;

int romanConvert(string roman)
{
    map<char,int> m={ 
            {'I',1}, 
            {'V',5}, 
            {'X',10}, 
            {'L',50},
    };
    
    int num=0;
    int i=0;
    if(roman.length()==1) return m[roman.at(0)];
    
    while(i<roman.length()){
        if(m[roman[i]]<m[roman[i+1]])
        {
            num+=m[roman[i+1]]-m[roman[i]];
            i+=2;
        }
        else
        {
            num+=m[roman[i++]];
        }
    }
    
    return num;
}

vector <string> split(string name)
{
    stringstream ss(name);
    string temp;
    vector<string> ans;
    
    while(getline(ss,temp,' ')) ans.push_back(temp);
    
    return ans;
}

int main()
{
  vector<string> names{"Steven XL","Steven XVI","Daviddd IX","David IX","Mary XV","Mary XIII","Mary XX"};
  sort(names.begin(),names.end());
//   for(auto A : names ) cout<<A<<" ";
//   cout<<endl;
  
  int i=0;
  
  while(i<names.size()-1)
  {
      vector<string> t1;
      vector<string> t2;
       
      t1=split(names[i]); 
      t2=split(names[i+1]);
      
    //   for(auto A: t1) cout<< A << " ";
    //   cout<<endl;
      
    //   cout<<romanConvert(t1[1])<<" "<<romanConvert(t2[1])<<endl;
    //   cout<<i <<" "<<i+1<<endl;
  if(t1[0]==t2[0] && romanConvert(t1[1]) > romanConvert(t2[1]) ) 
      { 
        //   cout<<"yes"<<endl;
        swap(names[i],names[i+1]);
      }
      
      i++;
   }
  
   for(auto A: names) cout<<A<<" , ";
   
   return 0;
    
}