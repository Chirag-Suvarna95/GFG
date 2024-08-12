/* a Node of the doubly linked list 
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

//Function to insert a new node at given position in doubly linked list.
void addNode(Node *head, int pos, int data)
{
   // Your code here
   Node *p=head;
   int count=0;
   while(count<pos)
   {
       p=p->next;
       count++;
   }
   Node *nn=new Node(data);  /*According to the above struct*/
   
   nn->next=p->next;
   nn->prev=p;
   if (p->next != NULL)
   p->next->prev=nn;
   p->next=nn;
}