// class Solution {
// public:
//     int strStr(string haystack, string needle) {
        
        // int m = haystack.size();
        // int n = needle.size();

        // for(int i=0;i<m-n+1;i++){
        //     count = 0;
        //     k = i;
        // }
        // for(int j=0;j<n;j++){
        //     if(haystack[k] == needle[j]){
        //         k++;
        //         count++;
        //     }else{
        //         break;
        //     }
        // }
        // if(count == n){
        //     return i;
        // }
        // return -1;
        
//     }
// };
class Solution {
public:
    
    void lpsfind(vector<int>&lps,string s) {
        // Your code goes here
        
        int pref=0,suf=1;
        
        while(suf<s.size())
        {
            if(s[pref]==s[suf])
            {
                lps[suf]=pref+1;
                suf++,pref++;
            }
            else
            {
                if(pref==0)
                {
                    lps[suf]=0;
                    suf++;
                }
                else
                {
                    pref = lps[pref-1];
                }
            }
        }
        
    }
    int strStr(string haystack, string needle) {
        
        vector<int>lps(needle.size(),0);
        lpsfind(lps,needle);

        int first=0,second=0;

        while(first<haystack.size() && second<needle.size())
        {
            // Match
            if(haystack[first] == needle[second])
            {
                first++,second++;
            }
            // Not matched
            else
            {
                if(second==0)
                first++;
                else
                second = lps[second-1];
            }
        }
        // Answer exist
        if(second==needle.size())
        return first-second;

        return -1;
    }
};
