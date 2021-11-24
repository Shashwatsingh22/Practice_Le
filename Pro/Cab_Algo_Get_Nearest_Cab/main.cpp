#include <iostream>
#include "car.h"
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;
int userX,userY;

bool compare(car c1,car c2)
{
    int d1=c1.distance(userX,userY);
    int d2=c2.distance(userX,userY);
    
    if(d1==d2)
    {
        return c1.getPosX()<c2.getPosX();
    }

    return d1<d2;
}

int main()
{
    string userName;

    cout<<"Enter the Your Name: ";
    cin>>userName;

    cout<<"Enter Your Coordinates :";
    cin>>userX>>userY;

    vector<car> v;

    int numCars;
    cout<<"Number of Cars Near You :";
    cin>>numCars;
    v.reserve(numCars);

    for(int i=0;i<numCars;i++)
    {
        char name;
        int x,y;
        cout<<"Car Name: ";
        cin>>name;
        cout<<"X axis and Y axis";
        cin>>x>>y;
        car temp(name,x,y);
        v.push_back(temp);
    }

    sort(v.begin(),v.end(),compare);
    
    cout<<"User Name : "<<userName<<" Position X:"<<userX<<" PostionY:"<<userY<<endl<<" Details Of CAB's"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<"Driver Name :"<<v[i].getDriverName()<<" Distance From User: "<<sqrt(v[i].distance(userX,userY))<<" Coordinates: "<<v[i].getPosX()<<","<<v[i].getPosY()<<endl;
    }
}