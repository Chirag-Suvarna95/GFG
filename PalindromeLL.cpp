

/* Structure of class Node is
class Node
{
	int data;
	Node next;
	
	Node(int d)
	{
		data = d;
		next = null;
	}
}*/

class Solution
{
    //Function to check whether the list is palindrome.
    boolean isPalindrome(Node head) 
    {
        //Your code here
        Node p=head;
        int count=0;
        if(p.next==null) return true;
        while(p!=null)
        {
            count++;
            p=p.next;
        }
        
        p=head;
        int arr[]=new int[count];
        int i=0;
        while(p!=null)
        {
            arr[i++]=p.data;
            p=p.next;
        }
        int j=count-1;
        i=0;
        while(i!=count/2)
        {
            if(arr[i]!=arr[j])
            return false;
            
            i++;
            j--;
        }
      return true;
     
       
    }    
}