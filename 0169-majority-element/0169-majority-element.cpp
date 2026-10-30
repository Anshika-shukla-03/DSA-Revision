class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n = nums.size();

        // for(int i=0; i<n; i++){
        //     int freq = 0;
        //     for(int j=0; j<n; j++){
        //         if(nums[i] == nums[j]){
        //             freq++;
        //         }
        //     }

        //     if(freq > n/2){
        //         return nums[i];
        //     }
        // }
        // return -1;

        int n = nums.size();
        unordered_map<int,int>freq;

        for(int num : nums){
            freq[num]++;
            if(freq[num] > n/2){
                return num;
            }
        }
        return -1;
    }
};