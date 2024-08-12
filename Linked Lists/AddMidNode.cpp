class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) {
        // Code Here
       
        
        Node *slow=head;
        Node *fast=head;
        
        Node* p = new Node(x);  //Note for Later
        
        if(head==NULL) return p;
         
        while (fast->next != NULL && fast->next->next != NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        
        p->next=slow->next;
        slow->next=p;
        return head;
    }
};