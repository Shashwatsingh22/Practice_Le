#include<iostream>
#include<queue>

using namespace std;

void Display(queue<int> q)
{
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }

    cout<<endl;
}

int main()
{
    queue<int> q;

    q.push(4);
    q.push(8);
    q.push(12);
    q.push(16);

    cout<<q.front()<<" "<<q.back()<<endl;
    Display(q);
}