//While --> Granth You Design One Perogram I giving you one dataset in which at the 3rd Col
     //   Clients email id are there.....
     //  We need to capture the email ids and send the template mail (automation script) 


// Print Armastrong Number --> 153 -> 1^3 + 5^3 + 3^3;


#include<stdio.h>

int main()  
{
    int num;  //100
    printf("Enter the Range : \n");
    scanf("%d",&num);
    int i=0;
    for(;i<=num;i++)
    {
        int sum=0;
        int no=i;
        
        while(no>=10)
        {
          int rem=no%10;
          sum=sum+rem*rem*rem;
          no=no/10;
        }
        sum=sum+no*no*no;

        if(sum==i)
        {
            printf("%d ",i);
        }

    }

    return 0;
}