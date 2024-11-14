/*--------------------Burte force-------------------------*/
class Solution {
  public:
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        vector<long long> sol;
        
        for(int i=1;i<n;i++)
        {
            int fact=1;
            for(int j=i;j>=1;j--)
            {
                fact=fact*j;
            }
            sol.push_back(fact);
        }
        return sol;
    }
};

/*---------Optimal----------------------------*/
class Solution {
  public:
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        vector<long long> sol;
        long long fact=1;
        sol.push_back(fact);
        
        for(int i=2;fact*i<=n;i++)
        {
            fact=fact*i;
            sol.push_back(fact);
        }
        return sol;
    }
};