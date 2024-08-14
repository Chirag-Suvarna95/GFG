class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        int setbits=0;
        int rem=0;
        while(N!=0)
        {
          rem=N%2;
          if(rem==1)
          setbits++;
          N=N/2;
        }
        return setbits;
    }
};
