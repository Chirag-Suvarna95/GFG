//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	  sort(arr,arr+n);
	  int lar=arr[n-1];
	  for(int i=n-2;i>=0;i--)
	  {
	      if(arr[i]<lar)
	      return arr[i];
	  }
	  return -1;
	}
};