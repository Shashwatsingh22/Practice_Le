#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string str;
    int count=0;
    while(n--)
    {
        cin>>str;

        for(int i =0;i<str.size()-1;i++)
        {
            if(str[i]==str[i+1])
            i++,count++;
        }
        cout<<count;
        count=0;
    }
}