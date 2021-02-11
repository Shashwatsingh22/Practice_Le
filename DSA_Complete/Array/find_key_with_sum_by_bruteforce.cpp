#include<iostream>
using namespace std;

int main()
{
    int size;
    cin>>size;
    
    int *ptr = new int[size];
    
    cout<<"Enter the Elements !!"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>ptr[i];
    }
    int element;
    cout<<"Enter the Key Which You Wants to Search of Addition !!"<<endl;
    cin>>element;

    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size;j++)
        {
            if(ptr[i]+ptr[j]==element)
            {
                cout<<ptr[i]<<" at "<<i<<" and "<<ptr[j]<<" at "<<j<<endl<<ptr[i]<<" + "<<ptr[j]<<" = "<<element<<endl;
                break;
            }
        }
    }
}