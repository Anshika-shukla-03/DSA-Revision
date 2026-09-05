class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;

        while(low <= high){
            int guess = (low+high)/2;

            if(nums[guess] == target){
                return guess;
            }
            // Part1 [4,5,6,7]

            if(nums[guess] > nums[n-1]){
                if(nums[guess] < target){
                    low = guess+1; // right side move
                }
                else{
                    if(nums[0] > target){
                        low = guess+1; // right side move
                    }
                    else{
                        high = guess-1; // left side move
                    }
                    
                }
            }
            else{

                //Part 2 [0,1,2]
                if(nums[guess] > target){
                    high = guess-1; // left
                }
                else{
                    if(nums[n-1] < target){
                        high = guess-1; // left side
                    }
                    else{
                        low = guess+1; // right side move
                    }
                }
                
            }
  
        }
        return -1;
    
    }
};