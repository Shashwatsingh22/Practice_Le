#include<bits/stdc++.h>
using namespace std;


int main() {

    int n;
    cin>>n;
    string str;

    int arr[26];
    for(int i=0;i<26;i++)
    arr[i]=0;

    int t = n;
    while(t--)
    {
        cin>>str;
        for(int i=0;i<str.size();i++)
        if(arr[str[i]-'a']!=n-t)
        arr[str[i]-'a']++;
    }

    int count =0;
    for(int i=0;i<26;i++)
    if(arr[i]==n)
    count++;
    cout<<count;
}