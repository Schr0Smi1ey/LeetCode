class Solution {
public:
    vector<int> adj[200005];
    bool f(int source,int des,vector<bool>& visited){
        visited[source] = true;
        for(auto x : adj[source]){
            if(!visited[x])
                if(x == des || f(x,des,visited))
                    return true;
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source == destination)
            return true;
        for(auto x : edges){
            int u = x[0],v = x[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool> visited(n,false);
        return f(source,destination,visited);
    }
};