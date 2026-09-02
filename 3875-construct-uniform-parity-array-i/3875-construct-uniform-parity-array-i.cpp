class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        
        vector<int>nums2(nums1.size());
        int j;
        for(int i=0; i<nums1.size(); i++){
            nums2[i] = nums1[i];
            nums2[i] = nums1[i] - nums1[j];

            if(nums2[i]%2 == 0 || nums2[i]%2 != 0){
                return true;
            }
        }
        return false;
    }
};