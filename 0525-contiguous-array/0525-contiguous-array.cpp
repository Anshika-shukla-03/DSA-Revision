class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int zero = 0;
        int one = 0;
        int result = 0;

        unordered_map<int,int>freq;

        for(int i=0;i<n;i++){
            if(nums[i] == 0){
                zero++;
            }else{
                one++;
            }

            int diff = zero - one;
            if(diff == 0){
                result = max(result,i+1);
                continue;
            }
            if(freq.find(diff) == freq.end()){
                freq[diff] = i;
            }else{
                int idx = freq[diff];
                int len = i-idx;
                result = max(len,result);
            }
        }
        return result;
    }
};