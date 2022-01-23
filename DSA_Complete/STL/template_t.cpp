#include<iostream>
using namespace std;

template <typename T>


class Id
{
    private:
     
     T data1;
     T data2;

    public:

    void PrintData()
    {
        cout<<data1<<" "<<data2<<endl;
    }

    void setName(T data1)
    {
        this->data1=data1;
    }

    void setroll(T data2)
    {
        this->data2=data2;
    }
};



// T Max(T a,T b)
// {
//     return a>b ? a:b;
// }

int main(){
  
  Id <int>per;
  
  per.setName(831458);
  per.setroll(45);

  per.PrintData();

}