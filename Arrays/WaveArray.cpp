class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        // Your code here
        for(int i=0;i<n-1; i+=2) //Assignment needs to happen
        {
            swap(arr[i],arr[i+1]);
        }
    }
    /*What i learned:
       1.Assignment needs to happen in loop increment i+=2
       2.Better to start from index 0 for this type of problems
       3.When 2 elems are considered in one iteration then n-1 is used
    */
};