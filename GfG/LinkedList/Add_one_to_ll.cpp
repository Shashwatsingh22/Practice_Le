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
        cout << node->data; 
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

class Solution
{
    public:
    
    Node *insert(Node *first,int data)
    {
        Node *temp=new Node(data);
        temp->next=first;
        first=temp;
        return first;
    }
    
     int add(Node *ptr)
    {
        static int carry=0;
       
        if(ptr!=NULL)
        {
            add(ptr->next);
            
            int result=0;
            if(ptr->next==NULL)
            {
             result=ptr->data+1;
             ptr->data=result%10;
             carry=result/10;
            }
            
            else
            {
                result=ptr->data+carry;
                ptr->data=result%10;
                carry=result/10;
            }
            
        }
        
        return carry;
    }
    
    Node* addOne(Node *head) 
    {
      int ans=add(head);
      if(ans!=0)
      {
        head=insert(head,ans);    
      }
      
      return head;
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  // } Driver Code Ends