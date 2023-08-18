class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<pair<int,int>,int>> q; // Queue to store (row, column) pairs and time
        bool visited[n][m]; // Matrix to mark visited cells
        memset(visited, false, sizeof(visited)); // Initialize all cells as not visited
        int t = 0; // Time variable

        // Push all initial rotten oranges into the queue
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(grid[i][j] == 2)
                    q.push({{i, j}, t}); // {{row, column}, time}
            }
        }

        int drow[] = {-1, 0, 1, 0}; // Direction arrays for row
        int dcol[] = {0, 1, 0, -1}; // Direction arrays for column
        int ans = 0; // To keep track of the maximum time taken
        
        // BFS traversal of the grid
        while(!q.empty())
        {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int t = q.front().second;
            q.pop();
            
            visited[row][col] = true; // Mark current orange as visited
            ans = max(ans, t); // Update the maximum time

            // Explore the four neighboring cells
            for(int i = 0; i < 4; i++)
            {
                int nrow = row + drow[i];
                int ncol = col + dcol[i];

                // Check if the new cell is within bounds and has a fresh orange
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 1 && !visited[nrow][ncol])
                {
                    grid[nrow][ncol] = 2; // Make the fresh orange rotten
                    q.push({{nrow, ncol}, t + 1}); // Push the new rotten orange into the queue with increased time
                }
            }
        }
        
        // Check if there are any unvisited fresh oranges left
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if (!visited[i][j] && grid[i][j] == 1)
                    return -1; // There are fresh oranges that can't be rotten
            }
        }
        
        return ans; // Return the maximum time taken for all oranges to become rotten
    }
};
