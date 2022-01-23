#include<iostream>
#include<vector>

using namespace std;

void Display(vector<int> v)
{
    //Method 1

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
cout<<endl;
    //Method 2

    for(auto A: v)
    {
        cout<<A<<" ";
    } 

    //Method 3 
    for(vector<int> :: iterator itr=v.begin();itr!=v.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> v;
    
    while(1)
    {
        int wants;
        cout<<"Do you Wants to Enter more Data ? (1/0)";
        cin>>wants;
        if(wants==1)
        {
            int data;

            cin>>data;
            v.push_back(data);
        }
        else
        {
            break;
        }
    }
    Display(v);

    //Assign
    //v.assign(5,2); /* 2  2 2 2 2 */

    //isEmpty
    cout<<v.empty()<<endl;

    //--> v.max_size()

    //__> v.insert(v.begin()+3,1000)

    //__> v.erase(v.begin()+3)

    // v = {2,4,6,8}    v2={5,10,15,20}
    //v.swap(v2)

    v.clear();
}