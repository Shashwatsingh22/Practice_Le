    #include<iostream>
#include<utility>

using namespace std;

int main()
{
    pair<string,long int>  p("DEF",56325);
    
    pair<string,long int> p1,p2;
    p1.first="ABS";
    p1.second=1234567890;
    
    p2=make_pair("Shashwat",225350);

    cout<<p.first<<" "<<p.second<<endl;

    cout<<(p1==p2)<<endl;

    pair<string,long int> p3(p2);
    
    cout<<p3.first<<" "<<p3.second<<endl;

    

}