class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n) {
        // Your code here
        
        for(int i=n-1;i>=0;i--)
        {
            
            for(int j=0;j<=i-1;j++) //Inner loop should run from 0 to i(i.e n-1)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                    
                }
                
            }
        }
    }
};
