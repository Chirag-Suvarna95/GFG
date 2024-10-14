class Solution {
public:
    bool isPalindrome(int x) {
        long temp=0;
        long temp1=x;
        while(x>0)
        {
            temp=temp*10 + x%10;
            x=x/10;
        }
        if(temp1==temp)return true;
        return false;
    }
};