// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
public:
    Node* divide(int N, Node *head){
        
        Node *even=NULL;
        Node *currentEven=NULL;
        
        Node *odd=NULL;
        Node *currentOdd=NULL;
        
        Node *ptr=head;
        while(ptr)
        {
            if(ptr->data%2==0)
            {
                Node *temp=new Node(ptr->data);
                temp->next=NULL;
                if(even==NULL)
                {
                    even=temp;
                    currentEven=even;
                }
                else
                {
                    currentEven->next=temp;
                    currentEven=temp;
                }
            }
            else
            {
                Node *temp=new Node(ptr->data);
                temp->next=NULL;
                if(odd==NULL)
                {
                    odd=temp;
                    currentOdd=odd;
                }
                else
                {
                    currentOdd->next=temp;
                    currentOdd=temp;
                }
            }
            ptr=ptr->next;
        }
        
        if(even==NULL)
        {
            head=odd;
            return head;
        }
        else
        {
        currentEven->next=odd;
        head=even;
        return head;
        }
    }
};

// { Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}
  // } Driver Code Ends