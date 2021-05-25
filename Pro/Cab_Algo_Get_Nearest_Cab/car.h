#include<math.h>
#include<string.h>

class car{
    string name_driver;
    int posX,posY;

    public:
    car(string name,int x,int y)
    {
       name_drive=name;
       posX=x;
       posY=y;
    }
    
    int distance(int userX,int userY)
    {
       return (posX*posX-userX*userX)+(posY*posY-userY*userY);
    }

    void display(int userX,int userY)
    {
        cout<<"Driver_Name : "<<name_driver<<"  Distance : "<<distance(userX,userY)<<" Coordinates : "<<posX<<","<<posY<<endl;
    }
};