#include<iostream>
using namespace std;


int main()
{
    int size;
    cin>>size;
    
    int ptr[size];
    
    cout<<"Enter the Elements !!"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>ptr[i];
    }
    
    int element;
    cout<<"Enter the Key Which You Wants to Search of Addition !!"<<endl;
    cin>>element;
    
        
        for(int j=0;j<size;j++)
        {
            int first=0;
            int last=size-1;
            while(first<last)
            {
              int mid=(last+first)/2;

              if(ptr[mid]+ptr[j]==element)
              {
                  cout<<ptr[mid]<<" at "<<mid<<" and "<<ptr[j]<<" at "<<j<<endl;
                  cout<<ptr[mid]<<" + "<<ptr[j]<<" = "<<element<<endl;
                  break;
              }
              else if(ptr[mid]+ptr[j]<element)
              {
                  first=mid+1;
              }
              else
              {
                  last=mid-1;
              }
            }
    }
    
}