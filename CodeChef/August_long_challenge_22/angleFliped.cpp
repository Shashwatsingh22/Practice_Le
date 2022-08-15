#include <iostream>
#include<map>
#define searchInMap(m,data) (m.find(data)==m.end())

using namespace std;


// bool searchInMap(map<int,int> m, int data)
// {
//    return m.find(data)==m.end();        
// }

int main() {
	int t=0;
	cin>>t;
	
	while(t--)
	{
	   bool ans=true;
	   int row=0,col=0;
	   cin>>row>>col;
	   
	   if(row==1 || col==1)
	   {
	       int M1[row][col];
	       int M2[row][col];
	       
	       //Taking Input
	       for(int i=0;i<row;i++)
	       {
	               for(int j=0;j<col;j++)
	               {
	                       cin>>M1[i][j];
	               }
	       }
	       
	       for(int i=0;i<row;i++)
	       {
	               for(int j=0;j<col;j++)
	               {
	                       cin>>M2[i][j];
	               }
	       }
	       
	       //Check Each Element One By One in case of row==1 or col ==1
	       
	       for(int i=0;i<row;i++)
	       {
	               for(int j=0;j<col;j++)
	               {
	                       if(M1[i][j]!=M2[i][j])
	                       {
	                               ans=false;
	                               break;
	                       }
	               }
	       }
	   }
	   else
	   {
	           int data=0;
	           map<int,int> M1_map1,M1_map2,M2_map1,M2_map2;
	           
	           for(int i=0;i<row;i++)
	           {
	                   for(int j=0;j<col;j++)
	                   {
	                           cin>>data;
	                           if((i+j)%2)
	                           {
	                              if(searchInMap(M1_map1,data)) M1_map1.insert({data,1});
	                              
	                              else M1_map1.insert({data,M1_map1[data]++});
	                           }
	                           
	                          else
	                          {
	                                  if(searchInMap(M1_map2,data)) M1_map2.insert({data,1});
	                                  
	                                  else M1_map2.insert({data,M1_map2[data]++});
	                          }
	                   }
	           }
	           
	           for(int i=0;i<row;i++)
	           {
	                   for(int j=0;j<col;j++)
	                   {
	                           cin>>data;
	                           if((i+j)%2)
	                           {
	                              if(searchInMap(M2_map1,data)) M2_map1.insert({data,1});
	                              
	                              else M2_map1.insert({data,M2_map1[data]++});
	                           }
	                           
	                          else
	                          {
	                                  if(searchInMap(M1_map2,data)) M2_map2.insert({data,1});
	                                  
	                                  else M2_map2.insert({data,M2_map2[data]++});
	                          }
	                   }
	           }
	           
	           for(auto itr : M1_map1)
	           {
	                   if(itr.second != M2_map1[itr.first]) 
	                   {
	                           ans=false;
	                           break;
	                   }
	                   
	           }
	           
	           for(auto itr : M1_map2)
	           {
	                   if(itr.second != M2_map2[itr.first]) 
	                   {
	                           ans=false;
	                           break;
	                   }
	           }
	          
	   }
	   
	   if(ans) cout<<"YES"<<endl;
	   else cout<<"NO"<<endl;
	}
	return 0;
}
