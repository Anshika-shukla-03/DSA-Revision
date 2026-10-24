class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string> result(n);

        int M = *max_element(begin(score),end(score));
        vector<int> mp(M+1, -1);

        for(int i=0; i<n; i++){
            mp[score[i]] = i;
        }
        int rank = 1;
        for(int s = M; s>=0; s--){
            if(mp[s] != -1){
                int athlete = mp[s];

                if(rank == 1){
                    result[athlete] = "Gold Medal";
                }else if(rank == 2){
                    result[athlete] = "Silver Medal";
                }else if(rank == 3){
                    result[athlete] = "Bronze Medal";
                }else{
                    result[athlete] = to_string(rank);
                }
                rank++;
            }
        }
        return result;
    }
};