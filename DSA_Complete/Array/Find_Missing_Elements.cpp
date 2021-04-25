#include<iostream>
using namespace std;

int summ(int A[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=A[i];
    }
  return sum;
}

int InsertMissingElement(int A[],int n,int mis_ele)
{
    int i=n-1;
    while(A[i]>mis_ele)
    {
        A[i+1]=A[i];
        i--;
    }
    A[i+1]=mis_ele;
    n++;
    return n;
}

int find_single_element_from_the_sorted_array_of_n_natural_num(int A[],int n,int size)
{

    int summation=(size*(size+1))/2;
    cout<<summation<<endl;

    int i=n-1;
    cout<<summ(A,n)<<endl;
    int element=summation-summ(A,n);
    cout<<element<<endl;

    if(element==0)
    {
        cout<<"No Element is Missing !!"<<endl;
        return n;
    }
    else{
    n=InsertMissingElement(A,n,element);
    }
    return n;
}

int find_single_element_from_natural_num_but_starting_from_random_place(int A[],int n)
{
    int missing_element=-1;
   for(int i=0;i<n;i++)
   {
       if(A[i]-i!=A[0])
       {
         missing_element=i+A[0];
         break;
       }
   }
cout<<missing_element<<endl;
   if(missing_element==-1)
   {
       return n;
   }
   else
   {
       n=InsertMissingElement(A,n,missing_element);
       return n;
   }
}



void Display(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int A[10]={1,2,3,4,5,7,8,9,10};
    int len=9;
    Display(A,len);
    //len=find_single_element_from_the_sorted_array_of_n_natural_num(A,len,10);
    len=find_single_element_from_natural_num_but_starting_from_random_place(A,len);
    Display(A,len);
}