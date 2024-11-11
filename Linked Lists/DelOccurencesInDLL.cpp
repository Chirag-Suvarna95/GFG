class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        // Write your code here
        Node *p=*head_ref;
        
        while(p->data==x)
        {
            *head_ref=p->next;
            (*head_ref)->prev=NULL;
            free(p);
            p=*head_ref;
        }
        p=*head_ref;
        /**p = *head_ref; is invalid because p is already a 
         * pointer * to Node, so assigning *p doesn’t make sense.
        Instead, you should set p to *head_ref directly.*/
        while(p!=NULL)
        {
            if(p->data==x)
            {
                 Node *temp=p;
                if (p->prev != NULL) {
                    p->prev->next = p->next;
                }
                if (p->next != NULL) {
                    p->next->prev = p->prev;
                }

                p=p->next;
                free(temp);
            }
            else{
                p=p->next;
            }
            
            
        }

    }
};