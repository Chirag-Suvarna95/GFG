/* Should return true if linked list is circular, else false */
class Solution {
  public:
    bool isCircular(Node *head) {
        // Your code here
        if(head==NULL) return true;
        Node *p=head;
        while(p->next!=NULL)
        {
            if(p->next==head )
            return true;
            p=p->next;
        }
        return false;
    }
};

