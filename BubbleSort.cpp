class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n) {
        // Your code here
        int i,j;
        for(i=0;i<n;i++)
         for(j=i+1;j<n;j++)
          if(arr[i]>arr[j])
          {
              int temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
          }
          
    }
};