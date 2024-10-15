/*------------------Brute Force----------------------*/
class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        long long sum=0;
        for(int i=1;i<=N;i++)
        {
            sum+=F(i);
        }
        return sum;
    }
    int F(int i)
    {
        int sum=1;
        for(int j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                sum+=j;
            }
        }
        return sum;
    }
};


/*---------------------Optimal Solution------------------------- */
class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        long long sum=0;
        for(int i=1;i<=N;i++)
        {
            sum+=(N/i)*i;
            /* N/i tells you how many numbers between 
            1 and N are divisible by i*/
            
            /*By multiplying this by i, you’re essentially 
            calculating the sum of all 
            those numbers that are divisible by i.*/
            
        }
        return sum;
    }
  
};