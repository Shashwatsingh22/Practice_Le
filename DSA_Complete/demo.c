//While --> Granth You Design One Perogram I giving you one dataset in which at the 3rd Col
     //   Clients email id are there.....
     //  We need to capture the email ids and send the template mail (automation script) 


// Print Armastrong Number --> 153 -> 1^3 + 5^3 + 3^3;


#include<iostream>
using namespace std;

int main()  
{
    int num;  //100
    cout<<"Enter the Range : "<<endl;
    cin>>num;

    while(num>=0)
    {
        int sum=0;
        int no=num;
        
        while(no>=10)
        {
          rem=no%10;
          sum=sum+rem*rem*rem;
          no=no/10;
        }
        sum=sum+no*no*no;

        if(sum==num)
        {
            cout<<num<<" ";
        }
    }
}