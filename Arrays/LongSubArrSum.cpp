/*---------------Brute Force---------------------*/
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


/*Optimal Solution for both +ve and -ve -------------------------------*/

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        //Haspmap method
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    
    for (int i = 0; i < N; i++) {
        //calculate the prefix sum till index i:
        sum += A[i];

        // if the sum = k, update the maxLen:
        if (sum == K) {
            maxLen = max(maxLen, i + 1);
        }

        // calculate the sum of remaining part i.e. x-k:
        long long rem = sum - K;

        //if a sub array of x-k exists
        //if it does exists it will not be pointing to the end
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        //At the end, total sum of array 
        //if sum was not there previously
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }
        return maxLen;
    } 

};