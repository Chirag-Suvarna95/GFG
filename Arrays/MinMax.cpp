class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        // code here
         long long int min = arr[0];
        long long int max = arr[0];
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>max) max=arr[i];
            else if(arr[i]<min) min=arr[i];
        }
          return { min, max};
    }
};
