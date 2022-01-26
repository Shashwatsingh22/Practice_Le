#include<iostream>
#include<deque>

using namespace std;

void Display(deque<int> dq)
{
    for(int i=0;i<dq.size();i++)
    {
        cout<<dq.at(i)<<endl;
    }

}

int main()
{
   deque <int> dq;

   dq.push_back(5);
   dq.push_front(10);
   dq.push_back(15);
   dq.push_front(20);

   dq.pop_back();
    
   cout<<dq.at(2)<<endl;
   Display(dq);
}