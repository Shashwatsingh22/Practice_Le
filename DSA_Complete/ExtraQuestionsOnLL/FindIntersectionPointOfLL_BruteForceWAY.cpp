#include <iostream>
using namespace std;

class Node
{
    public:
    Node *next;
    int data;
};

int length(Node *ptr)
{
    int len=0;
    while(ptr)
    {
        len++;
        ptr=ptr->next;
    }
    return len;
}

int FindMergePoint(Node *first, Node *Second)
{
   Node *ptr=first;
   Node *qtr=Second;
   
   int size1=length(ptr);
   int size2=length(qtr);

   for(int i=0;i<size1;i++)
   {
       for(int j=0;j<size2;j++)
       {
         if(ptr==qtr)
         {
             return ptr->data;
         }
         qtr=qtr->next;
       }
       qtr=Second;
       ptr=ptr->next;
   }
}


int main()
{

}