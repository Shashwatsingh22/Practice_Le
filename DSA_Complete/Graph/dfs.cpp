#include<iostream>
using namespace std;

void dfs(int Graph[][5],int ver)
{
   static int visted[5] = {0};

   if(visted[ver]==0)
   {
       cout<<ver<<" ";
       visted[ver]=1;

       for(int col=1;col<=4;col++)
       {
           if(Graph[ver][col]==1 && visted[col]==0)
           {
               dfs(Graph,col);
           }
       }
  }    
}

int main()
{
    int Graph[5][5] = {{0,0,0,0,0},
                       {0,0,1,0,1},
                       {0,1,0,1,0},
                       {0,0,1,0,1},
                       {0,1,0,1,0}};

   dfs(Graph,4);
}