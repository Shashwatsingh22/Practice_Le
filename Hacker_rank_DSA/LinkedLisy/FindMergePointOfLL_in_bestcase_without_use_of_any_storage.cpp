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
int length(SinglyLinkedListNode *ptr)
{
    int len=0;
    while(ptr)
    {
        len++;
        ptr=ptr->next;
    }
    return len;
}

 
 
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
SinglyLinkedListNode *ptr=head1;
SinglyLinkedListNode *qtr=head2;
   
   int size1=length(ptr);
   int size2=length(qtr);
   
   if(size1>size2)
   {
    int diff_for_ptr_at_LL1=size1-size2;
    //Now Take the Ptr to the Diff of the length
    for(int i=0;i<diff_for_ptr_at_LL1;i++)
    {
        ptr=ptr->next;
    }
    
    int itr=size1-diff_for_ptr_at_LL1;
    
    for(int i=0;i<itr;i++)
    {
        if(ptr==qtr)
        {
            return ptr->data;
        }
        ptr=ptr->next;
        qtr=qtr->next;
    }
    
   }
   else
   {
       
    int diff_for_ptr_at_LL2=size2-size1;
    //Now Take the Ptr to the Diff of the length
    for(int i=0;i<diff_for_ptr_at_LL2;i++)
    {
        qtr=qtr->next;
    }
    
    int itr=size2-diff_for_ptr_at_LL2;
    
    for(int i=0;i<itr;i++)
    {
        if(ptr==qtr)
        {
            return ptr->data;
        }
        ptr=ptr->next;
        qtr=qtr->next;
    }
   }
     
   return 0;
}

int main()