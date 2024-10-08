class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        // code here
        Node *head=new Node(arr[0]);
        Node *p=head;
        int n=arr.size();
        if(n==1)return head;
        for(int i=1;i<n;i++)
        {
            Node *nn=new Node(arr[i]);
            p->next=nn;
            nn->prev=p;
            p=p->next;
        }
        return head;
        
    }
};