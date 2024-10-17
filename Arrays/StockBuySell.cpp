/*---------------------Brute Force--------------------- */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0;

        for(int i=0;i<n;i++)
        {
            int buy=prices[i];

            for(int j=i+1;j<n;j++)
            {
                if(prices[j]-buy > profit && prices[j]>buy)
                {
                    profit=prices[j]-buy;
                }

            }
        }
        return profit;
    }
};

/*--------------------Optimal Solution------------------------------*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0;
        int Min=prices[0];

        for(int i=1;i<n;i++)
        {
            int cost=prices[i]-Min; //Compare current with prev minimum
            profit=max(profit,cost); //Compare current profit with prev profit
            Min=min(prices[i],Min); //Updates the previous minimum
        }
        return profit;
    }
};