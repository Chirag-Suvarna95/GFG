class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        
        int sum=0,count=0,Max=0;
        
        for(int i=0;i<N;i++)
        {
            sum=0;
            count=0;
            for(int j=i;j<N ;j++)
            {
                sum+=A[j];
                count++;
                if(sum==K)
                {
                    Max=max(Max,count);
                }
            }
        }
        return Max;
    } 

};

/*--------------------Optimal Solution(Only for +ve's)-------------------------*/
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        
        /*----------------Two Pointer Approach--------------*/
        /*Doesn't work for negative numbers*/
        int sum=0;
        int i=0,j=0;
        int maxLen=0;
        
        while(i<N && j<N)
        {
            sum+=A[j];
            
            if(sum==K)
            {
                maxLen=max(maxLen,j-i+1);
            }
            else if(sum>K)
            {
                i++;  //Move pointer from front
            }
            j++;
            
        }
        
        return maxLen;
    } 

};