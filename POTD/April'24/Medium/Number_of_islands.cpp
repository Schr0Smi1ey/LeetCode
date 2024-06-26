class Solution {
public:
    void dfs(int i,int j,vector<vector<char>>&grid){
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] != '1'){
            return;
        }
        grid[i][j] = '0';
        dfs(i ,j + 1,grid);
        dfs(i ,j - 1,grid);
        dfs(i + 1,j,grid);
        dfs(i - 1,j,grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        for(int i = 0;i < grid.size();i++){
            for(int j = 0;j < grid[0].size();j++){
                if(grid[i][j] == '1'){
                    ans++;
                    dfs(i,j,grid);
                }
            }
        }
        return ans;
    }
};