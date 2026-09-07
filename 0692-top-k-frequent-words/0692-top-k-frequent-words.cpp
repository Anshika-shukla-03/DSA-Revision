class Solution {
public:
    struct cmp {
        bool operator()(pair<string,int>& a, pair<string,int>& b) {
            if(a.second == b.second)
                return a.first < b.first;

            return a.second > b.second;       
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        priority_queue<pair<string,int>, vector<pair<string,int>>, cmp> pq;

        int n = words.size();
        unordered_map<string,int>f;

        for(int i=0; i<n; i++){
            f[words[i]]++;
        }
        for(auto i:f){
            string element = i.first;
            int freq = i.second;

            pair<string,int>curr = {element,freq};
            if(pq.size() < k){
                pq.push(curr);
                continue;
            }
            if(curr.second < pq.top().second ||
            (curr.second == pq.top().second &&
            curr.first > pq.top().first))
            {
                continue;
            }
            pq.pop(); 
            pq.push(curr); 
        }
        vector<string>res;
        while(!pq.empty()){
            res.push_back(pq.top().first);
            pq.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};