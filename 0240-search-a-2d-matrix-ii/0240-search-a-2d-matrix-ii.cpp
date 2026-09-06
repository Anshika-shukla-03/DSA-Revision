class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        // hum log last corner se start kr rahe h 18 se
        int row = n-1;
        int col = 0; 

        while(row >= 0 && col < m){
            if(matrix[row][col] == target){
                return true;
            }
            // 18>5 so we eleminate the row
            else if(matrix[row][col] > target){ 
                row--;
            }
            // 3<5 so we eleminate the col
            else{
                col++;
            }
        }
        return false;
    }
};