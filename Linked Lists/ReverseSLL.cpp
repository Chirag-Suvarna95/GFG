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

/**********************************************/
class Solution {
  public:
      ListNode* reverseList(ListNode* head) {
  
          if (head == NULL)
              return NULL;
  
          ListNode* temp = head;
          ListNode* prev = NULL;
  
          while (temp != NULL) {
              ListNode* front = temp->next;
              temp->next = prev;
              prev = temp;
              temp = front;
          }
  
          return prev;
      }
  };