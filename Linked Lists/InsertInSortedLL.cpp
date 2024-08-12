
class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        // Code here
        Node *nn=new Node(data);
        Node *p=head;
        if(head==NULL || data<=head->data) 
        {
        nn->next=head;
        head=nn;
        return head;
        }
        
        int flag=0;
        Node *prev=NULL;   /*Imp to initialize to null*/
        while(p!=NULL)
        {
            
            if(data<=p->data)
            {
                nn->next=p;
                prev->next=nn;
                flag=1;
                break;
            }
            prev=p;
            p=p->next;
        }
        if(flag!=1)
        {
            prev->next=nn;  //p will be NULL at this pont
        }
        return head;
    }
};