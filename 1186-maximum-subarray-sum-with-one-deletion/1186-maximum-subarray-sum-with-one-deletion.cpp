class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n = arr.size();

        int noDelete = arr[0];
        int oneDelete = INT_MIN;
        int result = arr[0];

        for(int i=1; i<n; i++){
            int prevnoDelete = noDelete;
            int prevoneDelete = oneDelete;

            noDelete = max(noDelete + arr[i], arr[i]);

            int v2;
            if(prevoneDelete == INT_MIN){
                v2 = arr[i];
            } else{
                v2 = prevoneDelete + arr[i];
            }

            oneDelete = max(v2,prevnoDelete);
            result = max(result, max(noDelete, oneDelete));
        }
        return result;
    }
};