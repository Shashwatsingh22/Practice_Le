#include<iostream>
#include<climits>
using namespace std;

int main() {
     
	 int test_case;
	 cin>>test_case;

	 while(test_case--)
	 {
         int D_N;
		 int G_M;

		 cin>>D_N;
		 cin>>G_M;

         int sum_D=0;
		 int sum_G=0;

		 int Max_D=INT_MIN;
		 int Max_G=INT_MIN;

		 for(int i=0;i<D_N;i++)
		 {
			 int num_q;
			 cin>>num_q;

			 sum_D+=num_q;
			 
			 if(num_q>Max_D)
			 {
				 Max_D=num_q;
			 }
		 }

		 for(int i=0;i<G_M;i++)
		 {
			 int num_q;
			 cin>>num_q;
			 
			 sum_G+=num_q;
			 
			 if(num_q>Max_G)
			 {
				 Max_G=num_q;
			 }
		 }

		 if(sum_D<sum_G)
		 {
            cout<<Max_D<<" Deepak"<<endl;
		 }
		 else if(sum_G<sum_D)
		 {
			 cout<<Max_G<<" Gautam"<<endl;
		 }
		 else
		 {
			 cout<<Max_D<<" Deepak"<<endl;
		 }

	 }
    

	return 0;
}