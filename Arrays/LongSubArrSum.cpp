/*---------------Brute Force---------------------*/
class Solution
{

public:
    int lenOfLongSubarr(int A[], int N, int K)
    {
        // Complete the function

        int sum = 0, count = 0, Max = 0;

        for (int i = 0; i < N; i++)
        {
            sum = 0;
            count = 0;
            for (int j = i; j < N; j++)
            {
                sum += A[j];
                count++;
                if (sum == K)
                {
                    Max = max(Max, count);
                }
            }
        }
        return Max;
    }
};

/*--------------------Optimal Solution(Only for +ve's)-------------------------*/
class Solution
{
public:
    int lenOfLongSubarr(int A[], int N, int K)
    {
        // Complete the function

        /*----------------Two Pointer Approach--------------*/
        /*Doesn't work for negative numbers*/
        int sum = 0;
        int i = 0, j = 0;
        int maxLen = 0;

        while (i < N && j < N)
        {
            sum += A[j];

            if (sum == K)
            {
                maxLen = max(maxLen, j - i + 1);
            }
            else if (sum > K)
            {
                i++; // Move pointer from front
            }
            j++;
        }

        return maxLen;
    }
};

/*Optimal Solution for both +ve and -ve -------------------------------*/

class Solution
{
public:
    int lenOfLongSubarr(int A[], int N, int K)
    {
        // Complete the function
        // Haspmap method
        map<long long, int> preSumMap;
        long long sum = 0;
        int maxLen = 0;

        for (int i = 0; i < N; i++)
        {
            // calculate the prefix sum till index i:
            sum += A[i];

            // if the sum = k, update the maxLen:
            if (sum == K)
            {
                maxLen = max(maxLen, i + 1);
            }

            // calculate the sum of remaining part i.e. x-k:
            long long rem = sum - K;

            // if a sub array of x-k exists
            // if it does exists it will not be pointing to the end
            if (preSumMap.find(rem) != preSumMap.end())
            {
                int len = i - preSumMap[rem];
                maxLen = max(maxLen, len);
            }

            // At the end, total sum of array
            // if sum was not there previously
            if (preSumMap.find(sum) == preSumMap.end())
            {
                preSumMap[sum] = i;
            }
        }
        return maxLen;
    }
};

/*-------------------TC: O(2N)---------------------*/
class Solution
{
public:
    int lenOfLongSubarr(int A[], int N, int K)
    {
        // Complete the function
        /*----------------Two Pointer Approach--------------*/
        /*Doesn't work for negative numbers*/

        int left = 0, right = 0; // 2 pointers
        long long sum = A[0];
        int maxLen = 0;
        while (right < N)
        {
            // if sum > k, reduce the subarray from left
            // until sum becomes less or equal to k:
            
            while (left <= right && sum > K)

            //-------Wont run for n times each outer iteration hence O(2N)-----
            {
                sum -= A[left];
                left++;
            }

            // if sum = k, update the maxLen i.e. answer:
            if (sum == K)
            {
                maxLen = max(maxLen, right - left + 1);
            }

            // Move forward thw right pointer:
            right++;
            if (right < N)
                sum += A[right];
        }

        return maxLen;
    }
};