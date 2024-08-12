/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        Node *p=head;
        int one=0,zero=0,two=0;
        while(p!=NULL)
        {
           
            if(p->data==0)
             zero++;
            else if(p->data==1)
            one++;
            else two++;
            
            p=p->next;
        }
        p=head;
        while(zero--)
        {
            p->data=0;
            p=p->next;
        }
     while(one--)
        {
            p->data=1;
            p=p->next;
        }

        while(two--)
        {
            p->data=2;
            p=p->next;
        }

       return head;
    }
};