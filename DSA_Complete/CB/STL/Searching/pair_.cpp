#include<iostream>
#include<vector>
using namespace std;

int main()
{
    pair<int,int> p(1,2);
    cout<<p.first<<" "<<p.second<<endl;

    pair<pair<int,int>,string> name;
    name.first.first=20;
    name.first.second=3;

    name.second="Alex";
    cout<<"Name :"<<name.second<<" Age:"<<name.first.first<<" Grad_Year:"<<name.first.second<<endl;

    pair<int,string> p1=make_pair(20,"Duo");
    cout<<" S.no:"<<p1.first<<" name:"<<p1.second<<endl;

    pair<pair<int,char>,string> p2=make_pair(make_pair(11,'A'),"Alo");
    cout<<"Name :"<<p2.second<<" Age:"<<p2.first.first<<" Grad_Sec:"<<p2.first.second<<endl;

    //Used Of the Pair with vector and Array

    vector<pair<int,string>> clg={{1,"Allen"},{2,"Soo"}};
    for(int i=0;i<clg.size();i++)
    {
        cout<<"Roll :"<<clg[i].first<<" Name: "<<clg[i].second<<endl;
    }

    cout<<"push_back"<<endl;
    vector<pair<int,string>> clg1;
    clg1.push_back(make_pair(1,"One"));
    clg1.push_back(make_pair(2,"Two"));
    clg1.push_back(make_pair(3,"Three"));
    
    for(int i=0;i<clg1.size();i++)
    {
        cout<<"Roll :"<<clg1[i].first<<" Name: "<<clg1[i].second<<endl;
    }
    
    cout<<"Array"<<endl;
    pair<int,string> pqr[]={{1,"one"},{2,"two"},{3,"three"}};
    
    for(int i=0;i<3;i++)
    {
        cout<<"Roll :"<<pqr[i].first<<" Name: "<<pqr[i].second<<endl;
    }
}