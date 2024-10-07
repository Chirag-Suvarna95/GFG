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


/*---------------Optimal Solution-----------------------*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int i=0,j;
       int n=nums.size();

       if(n==1)return nums[i];

       for(j=1;j<n;j++)
       {
         if(nums[i]!=nums[j])
         {
            nums[++i]=nums[j];
         }
       }
       return i+1;
    }
};