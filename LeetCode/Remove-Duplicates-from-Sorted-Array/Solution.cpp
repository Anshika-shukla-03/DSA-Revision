1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        vector<int>st;
5
6        for(int x : nums){
7            if(st.empty() || st.back() != x){
8                st.push_back(x);
9            }
10        }
11        for(int i=0; i<st.size(); i++){
12            nums[i] = st[i]; 
13        } 
14
15        return st.size();
16    }
17};