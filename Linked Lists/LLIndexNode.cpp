class Solution {
  public:
    int GetNth(Node *head, int index) {
        // Code Here
        Node *p=head;
        int count=1,a=0;
        
        while(p!=NULL && count!=index)
        {
            count++;
            p=p->next;
        }
        if(p!=NULL)
        a=p->data;
        
        if(a==0)return -1;
        return a;
    }
};