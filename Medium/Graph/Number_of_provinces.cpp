// LEETCODE
class Solution {
public:
    void dfs(int node,vector<bool> & visited,vector<vector<int>>& adj)
    {
        visited[node] = true;

        for(int v = 0 ;v < adj.size();v++)
        {
            if(adj[node][v] == 1 && !visited[v])
            {
                dfs(v,visited,adj);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& adj) 
    {
        int provinces = 0;
        vector<bool> visited(adj.size(),false);
        for(int i = 0;i<adj.size();i++)
        {
            if(!visited[i])
            {
                provinces++;
                dfs(i,visited,adj);
            }
        }
        return provinces;
    }
};