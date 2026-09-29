class Solution {
private:
    int solve(vector<int>&prices,int i, int buy,int transaction,vector<vector<vector<int>>>& dp){
        if(transaction == 2)
            return 0;

        if(i == prices.size())
            return 0;

        if(dp[i][buy][transaction] != -1){
            return dp[i][buy][transaction];
        }

        if(buy == 1){
            int choice1 = -prices[i] + solve(prices,i+1,0,transaction,dp);
            int choice2 = solve(prices,i+1,1,transaction,dp);
            return dp[i][buy][transaction] = max(choice1,choice2);
        }
        else{
            int choice1 = prices[i] + solve(prices,i+1,1,transaction+1,dp);
            int choice2 = solve(prices,i+1,0,transaction,dp);
            return dp[i][buy][transaction] = max(choice1,choice2);
        }
        
    }
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
        return solve(prices,0,1,0,dp);
    }
};