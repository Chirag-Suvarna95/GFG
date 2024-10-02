class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n=nums.size();
        int sum=0;
        int tsum=n*(n+1)/2;
        for(int i=0;i<n;i++)  //for(int &x: nums) sum+=x;
        {
            sum+=nums[i];  
        }
        return tsum-sum;
    }
};