/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution {
  public:
    // Function to reverse a linked list.
    struct Node* reverseList(struct Node* head) {
        // code here
        // return head of reversed list
        Node *p=head;
         Node *prev=NULL;
         Node *nE=head;  /*Next Element*/
        while(p!=NULL || nE!=NULL)
        {
           nE=p->next;
           p->next=prev;
           prev=p;
           p=nE;
        }
       return prev; 
       
    }
};