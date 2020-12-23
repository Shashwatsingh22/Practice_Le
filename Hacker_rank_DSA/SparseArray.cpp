#include<iostream>
#include<string>
using namespace std;

class Array{
    public:
    string *arr;
    int size;
};

int main()
{
    Array A;
    cin>>A.size;
    A.arr = new string[A.size]; 
    for(int i=0;i<A.size;i++)
    {
        cin>>A.arr[i];
    }
    
    Array A1;
    cin>>A1.size;
    A1.arr = new string[A1.size];
    
    for(int i=0;i<A1.size;i++)
    {
        int count=0;
        string str;
        cin>>str;
        A1.arr[i]=str;
        for(int i=0;i<A.size;i++)
        {
            if(str==A.arr[i])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}
