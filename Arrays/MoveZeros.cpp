class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n)
        {
            if(nums[i]==0)
            {
              int j = i + 1;
                while (j < n && nums[j] == 0) {
                    j++;  
                }
                if (j < n) {
                    swap(nums[i], nums[j]); 
                } else {
                    break;  
                }
            }
         i++;
        }
        
    }
};


/*--------------GFG---------------*/
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int i=0;
        int n=arr.size();
        int j=0;
        
        while(i<n)
        {
            if(arr[i]==0) //Changes required only if its zero
            {
                if(j==0) //This if condition makes a difference
                {j=i;}
                
                while(arr[j]==0  )
                {
                    j++;
                    if (j == n) return;
                }
                if(j<n)
                {
                
                    arr[i]=arr[j];
                    arr[j]=0;
                }
                else break;
                
            }
            i++;
        }
    }
};