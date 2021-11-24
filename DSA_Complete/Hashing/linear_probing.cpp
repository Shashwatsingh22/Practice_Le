#include<iostream>
#define SIZE 10
using namespace std;

int hashFunction(int key)
{
    return key%SIZE;
}

int isEmpty(int H[],int ind)
{
    return H[ind] == (0);
}

int nextEmptyIndex(int H[],int ind)
{
    while(!isEmpty(H,ind))
    {
        if(ind<SIZE)
        {
           ind++;
        }
        else
        {
            return -1;
        }
    }
    return ind;
}

void insert(int H[],int key)
{
   int index = hashFunction(key);
   
   if(isEmpty(H,index))
   {
      H[index]=key;
      cout<<"Key => "<<key<<"  index => "<<index<<endl;
   }
   else
   {
      index = nextEmptyIndex(H,index);
      if(index!=0)
      {
        H[index]=key;
        cout<<"Key => "<<key<<"  index => "<<index<<endl;
      }
      else
      {
          cout<<"Space is Full"<<endl;
          cout<<"Key => "<<key<<"  index => "<<index<<endl;
      }
   }

}

int Search(int H[],int key)
{
    int index = hashFunction(key);
     cout<<"Index By the Hash fUNCTION =>"<<index<<endl;
        while(H[index]!=key)
        {
          if(index != SIZE)
          {
              index++;
          }
          else
          {
              return -1;
          }       
        }
        
        return index;
}

int main()
{
    int A[SIZE] = {0};
    
    
     int num;
    int i=0;
    while(i!=SIZE/2)
    {
        cout<<"Enter the "<<i<<" element ";
        cin>>num;
        insert(A,num);
        cout<<A[i]<<endl;
        i++;
    }
     
    cout << "Enter the Number to Search ";
    cin>> num;
    int index = Search(A,num);
    cout<<"From the Main Function =>"<<index<<endl;
    if(index!=0)
    {
        cout<<num<<" Found at "<<index<<endl;
    }
}