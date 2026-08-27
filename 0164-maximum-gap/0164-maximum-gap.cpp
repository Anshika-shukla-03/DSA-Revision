class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();

        if(n < 2){
            return 0;
        }

        int mn = INT_MAX;
        int mx = INT_MIN;

        for(int val : nums){
            mn = min(mn, val);
            mx = max(mx, val);
        }

        if(mn == mx){
            return 0;
        }

        long long avg_gap = max(1LL, ((long long)mx - mn + n - 2) / (n - 1));

        vector<int> min_b(n-1, INT_MAX);
        vector<int> max_b(n-1, INT_MIN);

        for(int val : nums){
            if(val == mn || val == mx){
                continue;
            }
            int id = ((long long)val - mn) / avg_gap; 

            min_b[id] = min(min_b[id],val);
            max_b[id] = max(max_b[id],val);
        }

        long long ans = 0;

        long long prev = mn;

        for(int i=0; i<n-1; i++){
            if(min_b[i] == INT_MAX){
                continue;
            }

            long long gap = min_b[i] - prev;
            ans = max(gap,ans);
            prev = max_b[i];
        }
        ans = max((long long)mx - prev, ans);

        return ans;
    }
};