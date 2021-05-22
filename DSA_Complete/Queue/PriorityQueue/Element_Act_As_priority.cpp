#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    vector<int> v;
    cout<<"Enter the Process For the Execution: "<<endl;
    while(true)
    {
        char choice;
        cout<<"Do you Wants to Enter More Process ?(Y/n)";
        cin>>choice;
        if(choice=='Y')
        {
            int process;
            cin>>process;
            v.push_back(process);
        }
        else
        {
            break;
        }
    }
    sort(v.begin(),v.end());

    cout<<"Execution Started :"<<endl;
    for(int i=v.size()-1;i>=0;i--)
    {
        cout<<v[i]<<" ";
    }
    v.erase(v.begin(),v.end());
    for(int i=v.size()-1;i>=0;i--)
    {
        cout<<v[i]<<" ";
    }
}