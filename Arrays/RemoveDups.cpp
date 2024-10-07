class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        set<int> s(nums.begin(),nums.end()); //copys the vector to set

        int i=0;
        for (const int &x : s) {   //has to be const,since set is immutable
            nums[i++] = x;
        }

        return s.size();
    }
};