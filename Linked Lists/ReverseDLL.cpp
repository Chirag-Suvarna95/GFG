class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        // Your code here
    if (head == NULL || head->next == NULL) {
        return head; 
       }
       
        DLLNode *p=head;
        DLLNode *prev=NULL;

        
        while(p!=NULL)
        {
           prev=p->prev;
           
           p->prev=p->next;
           p->next=prev;
           
           p=p->prev;
        }
        head=prev->prev;
        return head;
    }
};