class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
          int n=str.length();
        string rev;
        for(int i=n-1;i>=0;i--)
        {
            rev+=str[i];
        }
        return rev;
    }
};