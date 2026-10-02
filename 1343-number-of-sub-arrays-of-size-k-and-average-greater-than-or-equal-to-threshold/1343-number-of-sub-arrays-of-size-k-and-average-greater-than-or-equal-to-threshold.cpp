class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int sum = 0;
        int ans = 0;
        int targetSum = k*threshold;

        for(int i=0; i<k; i++){
            sum += arr[i];
        }

        if(sum >= targetSum){
            ans++;
        }
        for(int i=k; i<n; i++){
            sum += arr[i] - arr[i-k];
            if(sum >= targetSum){
                ans++;
            }
        }
        return ans;
    }
};