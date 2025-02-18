class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            sort(nums.begin(),nums.end());
            int n=nums.size();
            int m = n/2;
            int count =0;
    
            if(n==1)
            return nums[0];
    
            for(int i=0;i<n-1;i++)
            {
                if(nums[i]==nums[i+1])
                {
                    count++;
                }
                else count=0;
                if(count>=m)
                {
                    return nums[i];
                }
            }
            return 0;
            
        }
    };