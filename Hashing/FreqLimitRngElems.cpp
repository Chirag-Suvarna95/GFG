class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr, int N, int P) {
        // do modify in the given array
         unordered_map <int,int> hash;
         for(int i=0;i<N;i++)
         {
             if(arr[i]<=P)
             {
                 hash[arr[i]]++;
             }
         }
         for(int i=0;i<N;i++)
         {
             arr[i]=hash[i+1]; //i+1 since elements are from 1 to P
         }
    }
};