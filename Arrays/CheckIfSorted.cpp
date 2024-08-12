class Solution {
  public:
    bool arraySortedOrNot(vector<int>& arr) {
        // code here
        int i=0,j=1;
        int n=arr.size();
        while(i<n-1)
        {
            if(arr[i]>arr[j])
            {return false;}
            i++;
            j++;
        }
        return true;
    }
};