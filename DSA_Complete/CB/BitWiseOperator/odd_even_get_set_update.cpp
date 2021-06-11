#include<iostream>
using namespace std;

bool isEven(int num)
{
    return num&1;
}

int findBit(int num,int place)
{
    return num&(1<<place-1);
  //If this number is greater than 0 then it is an set (means 1)
  // it the number is ==0 then at that place bit is 0
}

int main()
{
    int ch;
    cout<<"1. To check EVEN/ODD\n2. Want to Find the Bit at the i_th Position\n3.";
    cin>>ch;
    switch (ch)
    {
    case 1:
        {
            int num;
            cout<<"Enter the Num to Check for Even/Odd :";
            cin >> num;
            if(isEven(num)!=1)
            {
                cout<<num<<" Even"<<endl;
            }
            else
            {
               cout<<num<<" Odd"<<endl;
            }
        }
        break;
    case 2:
    {
        int num,place;
        cout<<"Enter the Num: ";
        cin>>num;
        cout<<"For Which Position You Want Bit: ";
        cin>>place;
        if(findBit(num,place)==0)
        {
            cout<<"Bit is "<<0<<"at the "<<place<<" place";
        }
        else
        {
            cout<<"Bit is "<<1<<" at the "<<place<<" place.\n IT MEANS SET.";
        }
    }
    default:
        break;
    }
}