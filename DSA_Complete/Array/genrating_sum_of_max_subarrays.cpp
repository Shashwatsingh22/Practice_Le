#include<iostream>
#include<climits>
#include<vector>
using namespace std;

void take_input_array(int a[],int n)
{
   cout<<"Enter the Elements :";
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
}

vector <int> v;
int  wants_subarrays_sum(int A[],int n)
{
    
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
          int sum=0;
            for(int k=i;k<j;k++)
            {
               sum+=A[k];
            }
            v.push_back(sum);
        }
    }
}

int main()
{
    int size;
    cout<<"Enter the Size of the Array: ";
    cin>>size;
    int A[size];
    take_input_array(A,size);
    
    wants_subarrays_sum(A,size);
    int max=INT_MIN;
    for(int i=0;i<v.size();i++)
    {
       if(max<v[i])
       {
           max=v[i];
       }
    }

    cout<<"Max sum is : "<<max;
}