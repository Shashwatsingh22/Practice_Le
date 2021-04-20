#include<iostream>
using namespace std;

class Array
{
    public:
    int size;
    int length;
    int A[20];
};

void allign(Array *a)
{
    int i=0,j=a->length-1;
    while(i<j)
    {
        if(a->A[i]>0 && a->A[j]<0)
        {
            swap(a->A[i++],a->A[j--]);
        }
        else if(a->A[i]>0)
        {
            j--;
        }
        else if(a->A[j]<0)
        {
            i--;
        }
        else
        {
            i++;
            j--;
        }
    }
}

void Display(Array a)
{
    for(int i=0;i<a.length;i++)
    {
        cout<<a.A[i]<<" ";
    }
    cout<<endl;
}

int main()
{
   Array arr={20,7,{-2,-4,6,8,-10,12,14}};
   Display(arr);
   allign(&arr);
   Display(arr);
}