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