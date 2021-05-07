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
public:
    ListNode *insert(ListNode *qtr,int data)
    {
        ListNode *temp=new ListNode(data);
        
        if(qtr==NULL)
        {
          qtr=temp;
          qtr->next=NULL; 
        }
        else
        {
         ListNode *q=qtr;
            while(q->next!=NULL)
            {
               q=q->next;
            }
            q->next=temp;
        }
        
        return qtr;
    }
    
    ListNode* addTwoNumbers(ListNode* first, ListNode* second) {
        
        ListNode *ptr=first;
        ListNode *qtr=second;
        
        int result=0;
        int carry=0;
        
        ListNode *third=NULL;
        
        while(ptr && qtr)
        {
          result=ptr->val+qtr->val+carry;
          
          carry=result/10;
          result%=10;  
          third=insert(third,result);
            
          ptr=ptr->next;
          qtr=qtr->next;
        }
        
        while(ptr)
        {
          result=ptr->val+carry;
          carry=result/10;
          result%=10;
          third=insert(third,result);
            
           ptr=ptr->next; 
        }
        
        while(qtr)
        {
          result=qtr->val+carry;
          carry=result/10;
          result%=10;
          third=insert(third,result);
            
           qtr=qtr->next; 
        }
        
        if(carry!=0)
        {
          third=insert(third,carry);
        }
      
        return third;
    }
};