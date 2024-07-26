class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int j=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==0)
	        {
	            if(j==0) 
	            { j=i; }   //j continues from the last found non 0 element
	            while(arr[j]==0)  //search for a non 0 element to swap
	            {
	                j++;
	                if(j==n) return;
	            }
	            arr[i]=arr[j];
	            arr[j]=0;
	        }
	    }
	}
};