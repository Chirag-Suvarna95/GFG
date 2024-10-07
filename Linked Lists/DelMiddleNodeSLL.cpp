class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head->next;
        if(head->next==NULL)return NULL;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next; //Slow stops one node before middle node
            fast=fast->next->next;
        }
        slow->next=slow->next->next; /*This will bypass the middle node pointer to the next node*/

        //slow=slow->next;  //Hence this code isnt required
        // slow->next=NULL;
        return head;
        
    }
};