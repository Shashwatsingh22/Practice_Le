#include<iostream>
using namespace std;

treeNode *SearchKeyByRec(treeNode *ptr , int key)
{
    if(ptr==NULL)
    {
        return ptr;
    }

    else if(ptr->data==key)
    {
        return ptr;
    }
    
    else if(ptr->data < key)
    {
        return SearchKeyByRec(ptr->rchild,key);
    }
    
    else
    {
        return SearchKeyByRec(ptr->lchild,key);
    }
}

int main()
{

}