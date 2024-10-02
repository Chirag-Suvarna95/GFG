class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int Max=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count++;
                
            }
            else {
                Max=max(Max,count);
                count=0;
            }
        }
        Max=max(Max,count);
        return Max;
    }
};