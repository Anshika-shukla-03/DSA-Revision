class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        string result ="";

        for(char ch : s){
            if(ch != ' '){
                word += ch;
            }
            else if(!word.empty()){
                if(result.empty())
                    result = word;
                else
                    result = word + " " + result;
                
                word = "";
            }
        }

        if(!word.empty()){
            if(result.empty())
                result = word;
            else
                result = word + " " + result;
        }

        return result;
    }
};