class Solution {
public:
    int characterReplacement(string s, int k) {
        int window_start = 0;
        int max_length = 0;
        int max_frequency = 0;
        
        unordered_map<char,int> frequency_map;

        for(int window_end = 0; window_end < s.length(); window_end++){
            char ch = s[window_end];
            frequency_map[ch]++;

            max_frequency = max(max_frequency,frequency_map[ch]);

            while((window_end - window_start + 1) - max_frequency > k){
                char left_char = s[window_start];
                frequency_map[left_char]--;
                window_start++;
            }
            max_length = max(max_length,window_end - window_start + 1);
        }
        return max_length;
    }
};