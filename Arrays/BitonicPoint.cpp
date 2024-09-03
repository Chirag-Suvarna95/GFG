class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
	    int i=0;
	    while(arr[i]<=arr[i+1] &&i!=n-1)
	    {
	        i++;
	    }
	    return arr[i];
	}
};