#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int,string> id;

    id.insert(pair<int,string>(3,"Varanasi"));
    id.insert({1, "Maharastra"});

    for(auto itr=id.begin();itr!=id.end();itr++)
    {
        cout<<"NAME: "<<itr->first<<" PLACE: "<<itr->second<<endl;
    }
}


/* 

#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<string,string> id;

    id.insert(pair<string,string>("Shashwat","Varanasi"));
    id.insert({"Prajawal", "Maharastra"});

    for(auto itr=id.begin();itr!=id.end();itr++)
    {
        cout<<"NAME: "<<itr->first<<" PLACE: "<<itr->second<<endl;
    }
}
*/