// https://leetcode.com/problems/all-paths-from-source-to-target/submissions/
class Solution {
public:
    int n;
    vector<vector<int>>adj;
    vector<vector<int>>res;
    vector<int>cur;
    bool vis[20];
    void dfs(int node){
        cur.push_back(node);
        if(node == n-1)
            res.push_back(cur);
        
        for(auto ch :adj[node])
            dfs(ch);
        
        cur.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        n = graph.size();
        adj=graph;
        memset(vis, 0 , sizeof vis);
        dfs(0);
        return res;
    }
};