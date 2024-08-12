class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del_node)
    {
       // Your code here
      Node *p=del_node;  //to be removed
      Node *q=del_node->next;
      p->data=q->data;
      p->next=q->next;
    }

};
