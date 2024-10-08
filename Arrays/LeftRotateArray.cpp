class Solution {

  public:
    void leftRotate(vector<int>& arr, int k) {
        // Your code goes here
        int n=arr.size();
        k=k%n;
        int* temp = new int[k];
        
        //Store rotating part in temp
        for(int i=0;i<k;i++)
        {
           temp[i]=arr[i];
        }
        //Shift the remaining array to start
        for(int i=k;i<n;i++)
        {
            arr[i-k]=arr[i];
        }
        //Store the temp array at the end
        int j=0;
        for(int i=n-k;i<n;i++)
        {
            arr[i]=temp[j++];
        }
    
    }
};