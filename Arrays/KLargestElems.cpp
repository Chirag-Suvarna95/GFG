class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    sort(arr,arr+n);
	    vector<int> ans;
	    int i=n-1;
	    while(k--)
	    {
	        ans.push_back(arr[i]);
	        i--;
     	}
     	return ans;
	}
};