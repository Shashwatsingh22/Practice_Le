#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int n,nq;
  cin>>n>>nq;
  vector<vector <int> > v(n);
  int lastAns=0;
  while(nq--)
  {
      int q,x,y;
      cin>>q>>x>>y;
       if(q==1)
    {
      int index=(x^lastAns)%n;
      v[index].push_back(y);
    }
    else
    {
      vector <int> c=v[(x^lastAns)%n];
      lastAns=c[y%c.size()];
      cout<< lastAns<<endl;
    }
  }
}
