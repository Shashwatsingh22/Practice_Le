#include<iostream>
using namespace std;

/*
int soln(int num)
{
   if(num==0)
   {
	   return 1;
   }
   else
   {
	  return num*soln(num-1);
   }
}

int main() {
    int num=0;
	cin>>num;
	cout<<soln(num);
	return 0;
}
*/



/*
For the Large Number like 100 We need use container to store the the Large So that we can manages the
Big Values Tooo.
*/
int main()
{
   int num=0;
   cin>>num;
   
   int ans[10000]={0};
   ans[0]=1;

   int counter=2;   //like 5=2(so starting from 2 only)*3*4*5
   int length=1;  //Intailly the Length (Dynamicaly It Will Increases When Digit Increases)
   int atEachIndex=0;  //For Calculation from each indexes value to Multiply So we need to Traverse From
                        // Starting Only Baar Baar
   int ExtraDigits=0; //When Extra Digits Start Coming then We need To Manage It. . . 

   while(counter<=num)
   {
	   atEachIndex=0;  //We need to reset For Every Updated ExtraDigits
       
       ExtraDigits=0;
	   
       while(atEachIndex < length)
       {
         ans[atEachIndex]=ans[atEachIndex]*counter;   //like initially a[0]=1(So that Why you need to put the Intial Value Of Index 0 to 1)*2
        
         ans[atEachIndex]=ans[atEachIndex]+ExtraDigits; //On Upper Multiplication we get num so we also need to add with Carry 
         
         ExtraDigits=ans[atEachIndex]/10; //When there 2 Digit come So we need Also to insert By 1 digit at One Index like 6*4=24 |4|2| 
         
         ans[atEachIndex]=ans[atEachIndex]%10; //Now we will place the 1's digit at perfect Index
         
         //like 12 % 10= 2  Now Store the 2 at the Place of it.
         
         atEachIndex++;
       }
       
       while(ExtraDigits!=0)
       {
          ans[length]=ExtraDigits%10; //Puting the 1's Digit at the Perfect Index
		  
          ExtraDigits=ExtraDigits/10; //Updating the num --> num=12/10=1
          
          length++; //as I have Said thst It will inscreases its size according to the Digits Dynamically
       }
       
       counter++;
   }

   for(int i=length-1;i>=0;i--)
   {
       cout<<ans[i];
   }
}