class Solution {
public:
    bool visited[55][55];
    int n,m,area = 0;
    int dRow[4] = {-1,0,1,0};
    int dCol[4] = {0,1,0,-1};
    bool is_valid(int i,int j)
    {
        return (i>=0 && i<n && j>=0 && j<m);
    }
    void dfs(vector<vector<int>> grid,int sr,int sc)
    {
        visited[sr][sc] = true;
        area += grid[sr][sc];
        for(int i=0;i<4;i++)
        {
            int nRow = sr + dRow[i];
            int nCol = sc + dCol[i];
            
            if(is_valid(nRow,nCol) && grid[nRow][nCol] == 1 && !visited[nRow][nCol])
            {
                dfs(grid,nRow,nCol);
            }
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        n = grid.size();
        m = grid[0].size();
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!visited[i][j] && grid[i][j] == 1)
                {
                    dfs(grid,i,j);
                    ans = max(ans,area);
                    area = 0;
                }
            }
        }
        return ans;
    }
};