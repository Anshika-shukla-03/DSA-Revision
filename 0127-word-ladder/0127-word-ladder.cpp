class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> wordSet(wordList.begin(), wordList.end());
        
        if (wordSet.find(endWord) == wordSet.end()) return 0;
        
        queue<pair<string, int>> q;
        q.push({beginWord, 1});
        
        while (!q.empty()) {
            auto [word, length] = q.front();
            q.pop();
            
            if (word == endWord) return length;
            
            for (int i = 0; i < word.size(); ++i) {
                char original = word[i];
                
                for (char c = 'a'; c <= 'z'; ++c) {
                    if (c == original) continue;
                    
                    word[i] = c;
                    
                    if (wordSet.count(word)) {
                        q.push({word, length + 1});
                        wordSet.erase(word); 
                    }
                }
                word[i] = original; 
            }
        }
        
        return 0;
    }
};