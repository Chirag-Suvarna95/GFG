// Function to find the data of kth node from the end of a linked list.
class Solution {
  public:
    int getKthFromLast(Node *head, int k) {
        // Your code here
        int n=0;
        Node *p=head;
        while(p!=NULL)
        {
            n++;
            p=p->next;
        }
        p=head;
        if(k>n) return -1;
        int N=n-k+1;
        
        int i=1;
        while(p!=NULL && i!=N)
        {
            p=p->next;
            i++;
        }
        return p->data;
    }
};