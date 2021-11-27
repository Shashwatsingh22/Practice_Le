int visited[5]={0};

void BFS(int Graph[][5],int vertex)
{
   cout<<vertex<<" ";
   enqeue(Q,vertex);
   visited[vertex]=1;

   while(!isEmpty(Q))
   {
       int ver = dequeue(Q);
       for(int i=1;i<5;i++)
       {
           if(Graph[ver][i]==1 && visited[Graph[ver][i]]!=0)
           {
               cout<<i<<" ";
               enqueue(Q,i);
               visited[i]=1;
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
                       {0,1,0,1,0}}
}