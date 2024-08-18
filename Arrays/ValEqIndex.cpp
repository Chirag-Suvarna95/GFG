class Solution {
  public:
    // Function to find elements in the array that are equal to their index.
    vector<int> valueEqualToIndex(vector<int>& arr) {
        // code here
        int i=1;
        vector<int> sol;
        while(i<=arr.size())
        {
            if(arr[i-1]==i)
            sol.push_back(i);
            i++;
        }
        return sol;
    }
};