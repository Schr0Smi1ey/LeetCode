class Solution {
public:
    int drow[4] = {-1, 0, 1, 0};
    int dcol[4] = {0, 1, 0, -1};
    int n = 0, m = 0;
    bool isOkay(int i, int j) {
        return i >= 0 && i < n && j >= 0 && j < m;
    }

    bool dfs(vector<vector<int>> &grid, vector<vector<int>> &dp, int i, int j, int health) {
        health -= grid[i][j];
        if (health <= 0)
            return false;

        if (i == n - 1 && j == m - 1)
        {
            return true;
        }

        if (dp[i][j] >= health)
            return false;

        dp[i][j] = health;

        for (int k = 0; k < 4; k++)
        {
            int nrow = i + drow[k];
            int ncol = j + dcol[k];
            if (isOkay(nrow, ncol))
            {
                if (dfs(grid, dp, nrow, ncol, health))
                {
                    return true;
                }
            }
        }

        return false;
    }

    bool findSafeWalk(vector<vector<int>> &grid, int health) {
        n = grid.size();
        m = grid[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return dfs(grid, dp, 0, 0, health);
    }
};