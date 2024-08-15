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

/*Brian made a wonderful observation that when we subtract a number by 1 
then all the bits after and at the rightmost set bit gets flipped.
 */
class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        int setbits=0;
      while(N>0)
       {
          N=N&(N-1);  /*this will unset the rightmost set bit
          and assign the new number to N.*/
          
          /*N = 12. In binary 1100.
          N = 1100
          N - 1 = 1011  ->Unsets the rightmost setbits
          Bitwise AND: 1100 & 1011 = 1000
          */
          setbits++;  
       }
        return setbits;
    }
};