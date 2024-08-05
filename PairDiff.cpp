class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        int i=0,j=1;
        while(i<n && j<n)
        {
            int key=arr[j]-arr[i];
            if(i!=j && key==x)
            return 1;
            else if(key<x)
            j++;
            else i++;  /* arr[j] is too large hence increment i
                        to increase value of i,since it is sorted*/
        }
        return -1;
    }
};