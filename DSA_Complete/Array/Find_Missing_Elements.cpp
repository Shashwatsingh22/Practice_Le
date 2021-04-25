#include<iostream>
#include<vector>
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

int multiple_element_missing(int A[],int n)  //O(n^2)
{
    for(int i=0;i<n;i++)
    {
        if(A[i]-i!=A[0])
        {
            cout<<A[0]+i<<" ";
            n=InsertMissingElement(A,n,A[0]+i);
        }
    }
    return n;
}

vector <int> merging(int A[],int n,vector <int> v,int m)
{
   vector <int> f;
   int i=0,j=0;
   while(i<n && j<m)
   {
       if(A[i]==v[j])
       {
           f.push_back(A[i]);
           i++;
           j++;
       }
       else if(A[i]<v[j])
       {
           f.push_back(A[i]);
           i++;
       }
       else if(A[i]>v[j])
       {
           f.push_back(v[j]);
           j++;
       }
       
   }
   for(;i<n;i++)
   {
       f.push_back(A[i]);
   }
   for(;j<m;j++)
   {
       f.push_back(v[j]);
   }
   return f;
}

vector <int> multiple_element_missing_O_n(int A[],int n) //We will do it in oreder of an by 
{                                               //the help of Merging becoz it is Sorted
    vector <int> v1;
    for(int i=0;i<n;i++)
    {
        if(A[i]-i!=A[0])
        {
           cout<<A[0]+i<<" ";
           v1.push_back(A[0]+i);
        }
    }
    
    return merging(A,n,v1,v1.size());
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
    //int A[10]={1,2,3,4,5,7,8,9,10};
    //int A[11]={10,12,13,15,16,18,20};
    int A[10]={11,13,18,20};
    int len=4;
    Display(A,len);
    //len=find_single_element_from_the_sorted_array_of_n_natural_num(A,len,10);
    //len=find_single_element_from_natural_num_but_starting_from_random_place(A,len);
    len=multiple_element_missing(A,len);
    cout<<endl;
    Display(A,len);
    cout<<endl;
    int B[10]={11,13,18,20};
    len=4;
    vector<int> v=multiple_element_missing_O_n(B,len);
    cout<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}