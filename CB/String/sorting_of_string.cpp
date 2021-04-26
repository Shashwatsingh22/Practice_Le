#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void Display(string st[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<st[i]<<" ";
    }
    cout<<endl;
}

bool compar_according_len(string st, string st1)
{
    if(st.length()==st1.length())
    {
        return st<st1;
    }
    return st.length()>st1.length();
}

int main()
{
    int len_of_list=0;
    cin>>len_of_list;
    string str[len_of_list];
    //Skip the first "/n" new line char by :-
    cin.get();

    for(int i=0;i<len_of_list;i++)
    {
        getline(cin,str[i]);
    }
    Display(str,len_of_list);
    //lets Sort according to "Lexographic Mannner First" by the help of the sort()
   // Lexographic Manner -> "a < b"
    sort(str,str+len_of_list);
    
    Display(str,len_of_list);
    //lets sort according to length if equal then "Lexographic Manner"
    // sort function have one extra paramenter it accept that is bool means we can make it customizable too
    
    sort(str,str+len_of_list,compar_according_len);

    Display(str,len_of_list);
}