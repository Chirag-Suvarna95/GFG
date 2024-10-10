


/*-------------Optimal Solution---------------*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sum=0;
        
        for(int i: nums)
        {
            sum=sum^i;
        }
        return sum;
        
    }
};