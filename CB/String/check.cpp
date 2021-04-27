#include<iostream>
using namespace std;
int main() {
   
     char a;
	 cin>>a;
     cout<<(int)a<<endl;

	 if((int)a>=97 && (int)a<=122)
	 {
		 cout<<"lowercase";
	 }
	 else if((int)a>=65 && (int)a<=90)
	 {
		 cout<<"UPPERCASE";
	 }
	 else
	 {
		 cout<<"Invalid";
	 }

	return 0;
}