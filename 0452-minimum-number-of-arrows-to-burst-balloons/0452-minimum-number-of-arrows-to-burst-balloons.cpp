class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();

        sort(points.begin(),points.end());
        vector<vector<int>>res;
        int start1 = points[0][0];
        int end1 = points[0][1];

        for(int i=1; i<n; i++){
            int start2 = points[i][0];
            int end2 = points[i][1];

            if(end1 >= start2){
                start1 = start1;
                end1 = min(end1,end2);
                continue;
            }
            res.push_back({start1,end1});
            start1 = start2;
            end1 = end2;
        }
        res.push_back({start1,end1});
        return res.size();
    }
};