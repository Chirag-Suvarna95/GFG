class Solution {
  public:
    int fractional_node(struct Node *head, int k) {
        // your code here
        Node *p=head;
        int count=0;
        while(p->next!=NULL)
        {
            count++;
            p=p->next;
        }
        int NK=count/k;
       
        p=head;
        while(p!=NULL && NK--)
        {
            p=p->next;
        }
        return p->data;
    }
};