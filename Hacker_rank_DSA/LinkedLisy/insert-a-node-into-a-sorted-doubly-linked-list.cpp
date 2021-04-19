DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {

   DoublyLinkedListNode *ptr,*q;
   ptr=head;
   q=NULL;
   
   while(ptr)
   {
       if(ptr->data<data)
       {
        q=ptr;
        
       }
       ptr=ptr->next;
   }
   
   DoublyLinkedListNode *temp=(DoublyLinkedListNode*)malloc(sizeof(DoublyLinkedListNode));
   temp->data=data;
   
   if(q==NULL)
   {
       temp->next=head;
       head=temp;
   }
   else
   {
    temp->next=q->next;
    q->next=temp;
   }
    
   return head;
   
}
