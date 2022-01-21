#include<iostream>
#include "ll.h"
//#define SIZE 10
using namespace std;

//Hashing Function => Num%SizeOfArray
int hashFunction(int key)
{
    return key%10;
}

void hashInsert(Node *head[],int key)
{
    int Index = hashFunction(key);
    insert(key,&head[Index]);
}

void hashSearch(Node *head[],int key)
{
    int index=hashFunction(key);
    cout<<search(&head[index],key);
}

int main()
{
    Node *Head[10];
    for(int i=0;i<10;i++)
    {
        Head[i]=NULL;
    }
    hashInsert(Head,10);
    hashInsert(Head,20);
    hashInsert(Head,25);

    hashSearch(Head,30);
}