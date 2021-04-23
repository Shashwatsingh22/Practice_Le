#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

class Stack
{
    public: 
    int size;
    int *A;
    int top;
};

void push(Stack *ptr,int num)
{
     ptr->top++;
     ptr->A[ptr->top]=num;
}

int pop(Stack *ptr)
{
    int node;
    node=ptr->A[ptr->top];
    ptr->top--;
    return node;
}
int topElement(Stack st)
{
    return st.A[st.top];
}

int length(SinglyLinkedListNode *ptr)
{
    int num=0;
    while(ptr!=NULL)
    {
        num++;
        ptr=ptr->next;
    }
    return num;
}

void tranfer_address_to_stack(SinglyLinkedListNode *ptr,Stack *st)
{
    while(ptr)
    {
        push(st,ptr->data);
        ptr=ptr->next;
    }
} 
 
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
   
   Stack st1,st2;
   
   st1.size=length(head1);
   st2.size=length(head2);
   
   st1.A=new int[st1.size];
   st2.A=new int[st2.size];
   
   tranfer_address_to_stack(head1,&st1);
   tranfer_address_to_stack(head2,&st2);
   
   SinglyLinkedListNode *ptr=head1;
   
   while(topElement(st1)==topElement(st2)) 
   {
       *ptr=pop(&st1);
       pop(&st2);
   }
   
   
   return ptr->next->data;
}

int main()