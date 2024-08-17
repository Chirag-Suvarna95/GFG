//User function Template for C++
class Solution
{
public:
    int singleDigit(long long N)
    {
        // Write Your Code here
        int sum=0;
        if(N<10)return N;
        return --N%9+1;
    }
};