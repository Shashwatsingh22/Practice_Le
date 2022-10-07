//https://leetcode.com/problems/linked-list-cycle-ii/

class Solution {
   
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head->next) return NULL;
        
        ListNode* slow=head;
        ListNode* fast=head;
        int isFirst=1;
        while(fast && fast->next && (slow!=fast || isFirst))
        {
            isFirst=0;
            slow=slow->next;
            fast=fast->next->next;
        }
        
        if(!fast || !fast->next) return NULL;
        
        if(slow==fast)
        {
            while(head != fast)
            {
                head=head->next;
                fast=fast->next;
            }
        }
        
        return head;
     }
};