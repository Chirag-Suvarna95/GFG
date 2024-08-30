








/*Yet to solve using optimal*/
/*Brute Force-> Failed due to long Time complexity*/

class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        int i=0;
        int length=arr.size();
        while(i!=n)
        { 
            int j=i+1;
            while(arr[i]>arr[j] && j!=n)
              { 
                  if(j==n-1)
                  {
                      arr[i]=-1;
                      goto here;
                  }
                  j++;
              }
            arr[i]=arr[j];
            here:
            i++;
            
        }
        arr[i-1]=-1;
        return arr;
    }
};