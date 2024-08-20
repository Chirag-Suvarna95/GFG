class Solution {
  public:

    void sumArray(vector<int> &arr) {
        // Your code goes here
        int n=arr.size();
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum+=arr[j];
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=sum-arr[i];
        }
    }
};