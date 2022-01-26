#include<iostream>
#include<queue>

using namespace std;

void Display(priority_queue<int> rt)
{
    while(!rt.empty())
    {
        cout<<rt.top()<<" ";
        rt.pop();


    }
}

int main()
{
    priority_queue<int> pq;

    pq.push(-100);
    pq.push(20);
    pq.push(-20);
    pq.push(100);

    Display(pq);
}