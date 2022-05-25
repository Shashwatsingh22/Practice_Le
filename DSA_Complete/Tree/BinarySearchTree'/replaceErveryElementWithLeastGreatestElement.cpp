#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* left;
    Node* right;

    Node(int data)
    {
       this->data=data;
       left=right=NULL;
    }
};

int insertData(Node* root,int data)
{
    int succ=-1;
    if(!root)
    { 
        root=new Node(data);
        return succ;
    }
    
    Node* ptr=root;
    Node* prev=NULL;

    while(ptr)
    {
        if(ptr->data>=data)
        {
            prev=ptr;
            ptr=ptr->left;        
        }
        else
        {
            prev=ptr;
            succ=ptr->data;
            ptr=ptr->right;
        }
    }

    if(prev->data>=data) prev->left=new Node(data);
    else prev->right=new Node(data);

    return succ;
}


int main()
{

}