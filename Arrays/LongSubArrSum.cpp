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