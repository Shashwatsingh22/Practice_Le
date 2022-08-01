// -- question -- https://leetcode.com/problems/reverse-linked-list-ii/

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
    ListNode* rev(ListNode* ptr)
    {
        if(!ptr || !ptr->next)   return ptr;
        
        ListNode* head = rev(ptr->next);
        ptr->next->next=ptr;
        ptr->next=NULL;
        
        return head;
    }
    
    void setNull(ListNode* start,ListNode* end)
    {
       ListNode* temp=start;
        
       while(temp->next!=end)
       {
           temp=temp->next;
       }
        
        temp->next=NULL;
        return;
    }
    
    ListNode* setPtr(ListNode* head,int index,bool isleft)
    {
       ListNode* temp=head;
        int count=1;
        while(count<index-1)
        {
          temp=temp->next;
          count++;
        }
        
        if(isleft && index==1) return NULL;
        
        else if(isleft) return temp;
        
        if(!temp->next->next) return NULL;
        
        return temp->next->next;
    }
    
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if(!head || !head->next || left==1 && right==1) return head;
        
        ListNode* leftPtr=NULL;
        ListNode* rightPtr=NULL;
        ListNode* revHead=NULL;
        
        
        // 1-> 2 -> 3 -> 4 -> 5 -> 6 -> 7->NULL
        
        // left -> 1 -> 2 -> NULL
        
        // revHead -> 3 -> 4 ->5-> NULL
        
        // right -> 6 -> 7-> NULL
        
        //Set the Left Pointer First
        
        
        leftPtr = setPtr(head,left,1);
        
        if(leftPtr) revHead = leftPtr->next;
        else revHead=head;

        rightPtr = setPtr(head,right,0);
        
        if(rightPtr) setNull(revHead,rightPtr);
        
        revHead=rev(revHead);
        
        //resemble
        if(leftPtr) leftPtr->next=revHead;
        if(rightPtr)
        {
            ListNode* temp=revHead;
            while(temp->next) temp=temp->next;
            temp->next=rightPtr;
        }
        
        
        if(left==1) head=revHead;
        
        return head;
    }
};

// 2nd Way
