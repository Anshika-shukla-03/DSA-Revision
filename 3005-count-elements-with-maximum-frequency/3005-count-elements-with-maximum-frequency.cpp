class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>freq;

        int n = nums.size();
        
        for(int val : nums){
            freq[val]++;
        }
        int count = 0;
        int maxFreq = 0;
        for(auto &pair : freq){
            maxFreq = max(maxFreq,pair.second);
        }
        for(auto &pair : freq){
           if(pair.second == maxFreq){
            count += maxFreq;
           }
        }
        return count;
    }
};