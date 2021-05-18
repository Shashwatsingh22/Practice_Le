#include<iostream>
#include<algorithm>

using namespace std;

bool compare(int a,int b)
{
    return a<=b;
}

int main()
{
    int arr[]={1,10,11,18,20};
    int n=sizeof(arr)/sizeof(arr[0]);
       
    //linear Search   
    auto itr=find(arr,arr+n,11);
    cout<<itr<<endl; //Returns the Address of the index
    //Lets Find the index
    cout<<itr-arr<<endl;
    
    if(itr-arr==n)
    {
        cout<<"Not Present";
    }
    
    else
    {
        cout<<"Present at "<<itr-arr<<endl;
    }
    
    //binary_Search => return the bool value
    
    bool isPresent = binary_search(arr,arr+n,11);
    
    if(isPresent)
    {
        cout<<"_Yes Present!_"<<endl;
    }
    else
    {
        cout<<"_Not Present!_"<<endl;
    }
//Now by the binary_search how we can get the index then we can get by the help of (lower_bound() , upper_bound()))

    //lower_bound(start,end,key) = give output -->  output >= key
   // upper_bound(start,end,key) = give output -->  output > key 
   
   auto addr = lower_bound(arr,arr+n,11);
   cout<<arr[addr-arr]<<endl;
   
   //But if we wants to get --> output <= key
   auto addr1 = lower_bound(arr,arr+n,11,compare);
   cout<<arr[addr1-arr]<<endl;
   
   auto addr2 = upper_bound(arr,arr+n,12);
   cout<<arr[addr2-arr]<<endl;
   
   
   //-----New----
   
   int arr1[]={1,2,3,3,3,4,4,4,4,5,5,5,5,6};
   int n1=sizeof(arr1)/sizeof(arr1[0]);
   
   cout<<upper_bound(arr1,arr1+n1,3)-arr1<<endl;
   cout<<lower_bound(arr1,arr1+n1,3)-arr1<<endl;
   
   int l=lower_bound(arr1,arr1+n1,5)-arr1;
   int u=upper_bound(arr1,arr1+n1,5)-arr1;
   //We can Also find the Number of keys present in arr (frequency)
   cout<<"frequency of 5 in arr are : "<<u-l<<endl;
}