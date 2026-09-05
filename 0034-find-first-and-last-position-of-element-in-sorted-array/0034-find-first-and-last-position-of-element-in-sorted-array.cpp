class Solution {
public:
    int FindFirst(vector<int>& arr,int target){
        int n = arr.size();
        int low = 0;
        int high = n-1;
        int res = -1;

        while(low <= high){
            int guess = (low+high)/2;
            if(arr[guess] < target){
                low = guess+1;

            }
            else if(arr[guess] > target){
                high = guess-1;
            }
            else{
                res = guess;
                high = guess-1;
            }
        }
        return res;
    }

    int FindLast(vector<int>& arr,int target){
        int n = arr.size();
        int low = 0;
        int high = n-1;
        int res = -1;

        while(low <= high){
            int guess = (low+high)/2;

            if(arr[guess] < target){
                low = guess+1;
            }
            else if(arr[guess] > target){
                high = guess-1;
            }
            else{
                res = guess;
                low = guess+1;
            }
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int left_most = FindFirst(nums,target);
        int right_most = FindLast(nums,target);
        return {left_most,right_most};
    }
};