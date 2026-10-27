class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>dp(nums[nums.size()-1]+1,0);

        for(int i=0; i<nums.size(); i++){
            dp[nums[i]] += nums[i];
        }
        if(nums.size() == 2){
            return nums[1]+nums[0];
        }
        if(nums.size() == 1){
            return nums[0];
        }
        for(int i=2; i<dp.size(); i++){
            dp[i] = max(dp[i-1],dp[i]+dp[i-2]);
        }
        return dp[dp.size()-1];
    }
};