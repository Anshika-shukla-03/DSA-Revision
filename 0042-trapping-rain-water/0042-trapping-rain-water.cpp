class Solution {
public:
    int trap(vector<int>& height) {

        // // Brute force approach
        // int n = height.size();

        // int totalwater = 0;
    
        // for(int i=0; i<n-1; i++){

        //     int maxleft = 0;
        //     int maxright = 0;

        //     for(int left = 0; left<=i; left++){
        //         maxleft = max(maxleft,height[left]);
        //     }
        //     for(int right = i; right<n; right++){
        //        maxright = max(maxright,height[right]);
        //     }

        //     int water = min(maxleft, maxright) - height[i];

        //     totalwater += water;
            
        // }
        // return totalwater;

        // Prefix max array approach

        int n = height.size();

        vector<int>leftmax(n);
        vector<int>rightmax(n);

        leftmax[0] = height[0];

        for(int i=1; i<n; i++){
            leftmax[i] = max(leftmax[i-1],height[i]);
        }

        rightmax[n-1] = height[n-1];

        for(int i=n-2; i>=0; i--){
            rightmax[i] = max(rightmax[i+1],height[i]);
        }

        int totalwater = 0;

        for(int i=0; i<n; i++){
            int water = min(leftmax[i],rightmax[i])-height[i];
            totalwater += water;
        }

        return totalwater;
    }
};