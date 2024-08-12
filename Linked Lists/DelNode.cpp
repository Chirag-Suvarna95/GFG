Node* deleteNode(Node *head,int x)
{
    //Your code here
    Node *p=head;
    if(x==1)
    {
        head=head->next;
        free(p);
        return head;
    }
    int i=1;
    while(i<x-1)
    {
        i++;
        p=p->next;
    }
    Node *d=p->next;
    p->next=d->next;
    free(d);
    return head;
    
}