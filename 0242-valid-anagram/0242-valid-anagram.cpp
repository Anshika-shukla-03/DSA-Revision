class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());

        // if(s==t){
        //     return true;
        // }return false;

        // better Approach -> T.C = O(n) S.C = o(1)

        if(s.length() != t.length()){
            return false;
        }

        vector<int>freq(26,0);

        for(int i=0; i<s.length(); i++){
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }
        for(int i=0; i<freq.size(); i++){
            if(freq[i] != 0){
                return false;
            }
        }
        return true;
    }
};