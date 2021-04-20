#include <iostream>
using namespace std;

class Array{
    public:
    int size;
    int A[20];
    int length;
};

void insert_sorted_place(Array *x,int ele)
{
  int i=x->length-1;
   while(i>0 && x->A[i]>ele)
   {
      x->A[i+1]=x->A[i];
      i--;
   }
   if(i>=0)
   {
   x->A[i+1]=ele;
   x->length++;
   }
}

void display(Array xyz)
{
   for(int i=0;i<xyz.size;i++)
   {
     cout<<xyz.A[i]<<" ";
   }
   cout<<endl;
}

int main()
{
    Array arr={20,{10,20,30,40,50,60},6};
    
    display(arr);
    int data;
    cin>>data;
    insert_sorted_place(&arr,data);
    display(arr);
}