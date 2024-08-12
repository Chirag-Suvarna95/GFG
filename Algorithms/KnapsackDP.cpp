class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       if(n==0 || W==0) return 0;
       int sol[n+1][W+1];
       for(int i=0;i<=n;i++)
       {
           for(int j=0;j<=W;j++)
           {
               if(i==0 || j==0)
            sol[i][j]=0;
                else if(wt[i-1]>j)
                 sol[i][j]=sol[i-1][j];
                 else
                 sol[i][j]=max(sol[i-1][j],sol[i-1][j-wt[i-1]] + val[i-1]);
           }
       }
       return sol[n][W];
      
    }
};