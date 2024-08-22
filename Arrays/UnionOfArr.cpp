class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int doUnion(vector<int> arr1, vector<int> arr2) {
        // code here
         set<int>st;  //doesnt store duplicate values
        for(int i=0;i<arr1.size();i++){
            st.insert(arr1[i]);
        }
        for(int i=0;i<arr2.size();i++){
            st.insert(arr2[i]);
        }
        return st.size();
    
    }
};