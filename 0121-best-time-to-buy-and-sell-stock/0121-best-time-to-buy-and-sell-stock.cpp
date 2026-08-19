class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int n = prices.size();

        // int profit = 0;

        

        // for(int i=0; i<n; i++){
        //     for(int j = i+1; j<n; j++){
        //         if(prices[i] < prices[j]){
        //             profit = max(profit,prices[j] - prices[i]);
        //         }
                
        //     }
        // }
       
        // return profit;

        // optimal approach 

        // int n = prices.size();

        // int i = 0;
        // int j = 1;

        // int profit = 0;

        // while(j < n){
        //     if(prices[j] < prices[i]){
        //         i = j;
        //     }
        //     else{
        //         profit = max(profit,prices[j] - prices[i]);
        //     }
        //     j++;
        // }
        // return profit;

        // Greedy Approach 

        int n = prices.size();
        int minPrice = prices[0];
        int profit = 0;

        for(int i = 1; i<n; i++){
            minPrice = min(minPrice,prices[i]);
            profit = max(profit,prices[i]-minPrice);
        }
        return profit;
    }
};