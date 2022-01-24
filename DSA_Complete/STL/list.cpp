#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> l;

    l.push_back(20);
    l.push_front(30);

    cout<<l.front()<<endl;
    cout<<l.back()<<endl;
    
    l.erase(l.begin());
    l.clear();
}