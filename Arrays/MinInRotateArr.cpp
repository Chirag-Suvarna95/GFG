class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        int min=0;
        min=arr[0];
        for(int i=1;i<n-1;i++)
        {
            if(arr[i]<=arr[i+1])
            {
                if(arr[i]<min)
                min=arr[i];
            }
        }
        if(arr[n-1]<min)
            return arr[n-1];
        return min;
    }
};