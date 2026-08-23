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

        // int n = height.size();

        // vector<int>leftmax(n);
        // vector<int>rightmax(n);

        // leftmax[0] = height[0];

        // // prefix 
        // for(int i=1; i<n; i++){
        //     leftmax[i] = max(leftmax[i-1],height[i]);
        // }

        // rightmax[n-1] = height[n-1];

        // for(int i=n-2; i>=0; i--){
        //     rightmax[i] = max(rightmax[i+1],height[i]);
        // }

        // int totalwater = 0;

        // for(int i=0; i<n; i++){
        //     int water = min(leftmax[i],rightmax[i])-height[i];
        //     totalwater += water;
        // }

        // return totalwater;

        // // Two pointer

        // int n = height.size();
        // int left = 0;
        // int right = n-1;

        // int leftmax = 0;
        // int rightmax = 0;
        // int totalwater = 0;

        // while(left < right){
        //     if(height[left] < height[right]){
        //         if(height[left] >= leftmax){
        //             leftmax = height[left];
        //         }
        //         else{
        //             totalwater += leftmax - height[left];
        //         }
        //         left++;
        //     }
        //     else{
        //         if(height[right] >= rightmax){
        //             rightmax = height[right];
        //         }
        //         else{
        //             totalwater += rightmax - height[right];
        //         }
        //         right--;
        //     }
        // }
        // return totalwater;

        // Monotonic stack

        stack<int>st;
        int totalwater = 0;

        for(int i=0; i<height.size(); i++){
            while(!st.empty() && height[i] > height[st.top()]){
                int bottom = st.top();
                st.pop();
                if(st.empty()){
                    break;
                }
                int left = st.top();
                int boundedheight = min(height[left],height[i]) - height[bottom];

                int width = i-left-1;
                totalwater += boundedheight * width;
            }
            st.push(i);
        }
        return totalwater;
    }
};