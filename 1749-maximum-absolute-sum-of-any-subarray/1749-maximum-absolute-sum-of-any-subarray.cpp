class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        
        int minSum = 0;
        int maxSum = 0;
        
        int n = nums.size();
        int ans = 0;

        for(int i=0; i<n; i++){

            maxSum = max(0,maxSum + nums[i]);
            minSum = min(0,minSum + nums[i]);

            ans = max(ans,max(abs(maxSum),abs(minSum)));
        }
        return ans;
    }
};