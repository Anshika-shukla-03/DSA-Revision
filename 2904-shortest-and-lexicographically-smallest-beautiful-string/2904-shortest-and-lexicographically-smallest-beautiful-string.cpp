class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        
        int n = s.length();
        string ans = "";
        int j=0;
        int i=0;

        int count_1 = 0;

        for(int j=0; j<n; j++){
            
            if(s[j] == '1') {
                count_1++;
            }
            while(count_1 > k){
               if(s[i] == '1'){
                    count_1--;
               }
               i++;
            }

            while(count_1 == k && s[i] == '0') {
                i++;
            }

            if(count_1 == k) {

                string current = s.substr(i, j - i + 1);

                if(ans == "" ||
                   current.length() < ans.length() ||
                   (current.length() == ans.length() && current < ans)) {

                    ans = current;
                }
            }
        }
        return ans;

    

    }
};