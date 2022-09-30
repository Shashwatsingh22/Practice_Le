// leetcode -- https://leetcode.com/problems/reverse-nodes-in-k-group/submissions/
Input:
LinkedList: 1->2->3->4->5
K = 3
Output: 3 2 1 5 4 
Explanation: 
The first 3 elements are 1,2,3 are reversed 
first and then elements 4,5 not  reversed.Hence, 
the resultant linked list is 3->2->1->4->5.

//GFg --> https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1
Input:
LinkedList: 1->2->3->4->5
K = 3
Output: 3 2 1 5 4 
Explanation: 
The first 3 elements are 1,2,3 are reversed 
first and then elements 4,5 are reversed.Hence, 
the resultant linked list is 3->2->1->5->4.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    
    ListNode* reverse(ListNode* head)
    {
        if(!head || !head->next) return head;
        
        ListNode* ptr=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        
        return ptr;
    }
    
    void show(ListNode* ptr)
    {
        while(ptr)
        {
            cout<<ptr->val<<"->";
         ptr=ptr->next;
        }
            cout<<endl;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(!head || !head->next) return head;
        
        ListNode* child = head;
        ListNode* ptr = NULL;
        
        //No need to attach the new reverse nodelist to ptr by doing some action for
        // First time
        bool firstTime = true;
        
        while(child && child->next)
        {
            int tempK=k;
            ListNode* tempHead = child;
            ListNode* cutter = NULL;
            while( child && tempK--)
            {
                cutter=child;
                child=child->next;
            }
            cout<<tempK<<endl;
            cutter->next=NULL;
            show(ptr);
            show(tempHead);
            
            if(tempK<=0)
            {
            if(firstTime)
            {
                ptr=reverse(tempHead);
                firstTime=false;
            }
        
            else
            {
                ListNode* temp = reverse(tempHead);
                ListNode* helper=ptr;
                
                while(helper->next) helper=helper->next;
                helper->next=temp;
             }
            }
              
            else
            {
              show(tempHead);
              ListNode* helper=ptr;
               while(helper->next)
               {
                   helper = helper->next;
               }
                helper->next=tempHead;
            }
            
        }
        show(ptr);
        if(child && ptr)
        {
            ListNode* helper=ptr;
            while(helper->next) helper=helper->next;
            helper->next=child;
        }
      return ptr;
    }
};





//GFG
class Solution
{
    node* reverse(node* head)
    {
        if(!head || !head->next) return head;
        
        node* ptr=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        
        return ptr;
    }
    
    public:
    struct node *reverse (struct node *head, int k)
    { 
        if(!head || !head->next) return head;
        
        node* child = head;
        node* ptr = NULL;
        
        //No need to attach the new reverse nodelist to ptr by doing some action for
        // First time
        bool firstTime = true;
        
        while(child && child->next)
        {
            int tempK=k;
            node* tempHead = child;
            node* cutter = NULL;
            while( child && tempK--)
            {
                cutter=child;
                child=child->next;
            }
            cutter->next=NULL;
            
            if(firstTime)
            {
                ptr=reverse(tempHead);
                firstTime=false;
            }
        
            else
            {
                node* temp = reverse(tempHead);
                node* helper=ptr;
                
                while(helper->next) helper=helper->next;
                helper->next=temp;
             }
            
            
        }
        if(child && ptr)
        {
            node* helper=ptr;
            while(helper->next) helper=helper->next;
            helper->next=child;
        }
      return ptr;
    }
};