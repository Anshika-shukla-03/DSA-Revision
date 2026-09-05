class Solution {
public:

    long long kokoEat(vector<int>& arr,int n,int speed){
        long long h = 0; // hour
        for(int i=0; i<n; i++){
            h += arr[i]/speed;
            if(arr[i]%speed != 0)
                h++;
        }
        return h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        int res = -1;

        while(low <= high){
            int guess = (low+high)/2;
            long long hour = kokoEat(piles,n,guess);

            if(hour > h){
                low = guess+1;
            }
            else{
                res = guess;
                high = guess-1;
            }
        }
        return res;
    }
};