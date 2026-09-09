class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char, char> s2t;
        unordered_map<char, char> t2s;

        for (int i = 0; i < s.length(); ++i) {
            char c1 = s[i], c2 = t[i];

            if ((s2t.count(c1) && s2t[c1] != c2) || 
                (t2s.count(c2) && t2s[c2] != c1)) {
                return false;
            }

            s2t[c1] = c2;
            t2s[c2] = c1;
        }

        return true;
    }
};