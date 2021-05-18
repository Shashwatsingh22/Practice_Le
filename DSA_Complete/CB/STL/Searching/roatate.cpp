#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={1,2,2,3,3,3,4,4,4,4,5,5,5,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    //When We use the Rotate Function It need three Position --> rotate(start,pos_from_where_to_rotate,end);
  
    //Lets rotate the  Array from the Mid
    //rotate(arr,arr+n/2,arr+n+1);
    //Roatete Complete Arr
    
    while(n--)
    {
     int i=1;
     rotate(arr,arr+i,arr+n+1);
     i++;
    for(int ele:arr)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    }

    
}