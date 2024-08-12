class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int count=0;
	    int i;
	    if(n<=0) return -1;
	    for(i=0;arr[i]!=x;i++); 
	    {//Goes till 1st element i.e x}
	    if(i==n) return -1;
	    for(int j=i;j<n && arr[j]==x;j++)
	    {
	        count++;  //counts till the last x and then stops
	    }
	    return count;
	}}
};