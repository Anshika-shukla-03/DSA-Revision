class Solution {
public:
    string convert(string s, int numRows) {
        
        if(numRows == 1 || numRows > s.length()){
            return s;
        }
        vector<string> rows(numRows);
        int row =0;

        bool goingDown = true;

        for(char ch : s){
            rows[row] += ch;
            if(row == numRows - 1){
                goingDown = false;
            } else if(row == 0){
                goingDown = true;
            }
            if(goingDown){
                row++;
            }
            else{
                row--;
            }
            
        }
        string result = "";
        for(string str : rows){
            result += str;
        }
        return result;
        
    }
};