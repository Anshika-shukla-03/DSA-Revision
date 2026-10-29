class Solution {
public:
    void dfs(vector<vector<int>>& graph, int src, int dest,vector<int>&path,vector<vector<int>>& ans){
        if(src == dest){
            ans.push_back(path);
            return;
        }
        for(int v : graph[src]){
            path.push_back(v);
            dfs(graph,v,dest,path,ans);
            path.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<int>>ans;
        vector<int>path;
        path.push_back(0);
        dfs(graph,0,n-1,path,ans);
        return ans;

        
    }
};