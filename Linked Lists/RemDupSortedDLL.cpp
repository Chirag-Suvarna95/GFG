class Solution
{
public:

    Node * removeDuplicates(struct Node *head)
    {
        // Your code here
        Node *p=head->next;
        
        while(p!=NULL)
        {
            if(p->data==p->prev->data)
            {
                Node *temp=p;
                p->prev->next=p->next;
                
                if(p->next!=NULL) /*****Must If condition******/
                p->next->prev=p->prev;
                
                p=p->next;
                
                free(temp);
            }
            else{
                p=p->next;
            }
        }
        return head;
    }
};