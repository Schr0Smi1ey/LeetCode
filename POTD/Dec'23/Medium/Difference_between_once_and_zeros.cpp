class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<int> row,col;
        int n = grid.size(),m = grid[0].size();
        for(int i = 0;i<n;i++){
            int cnt = 0;
            for(int j = 0;j<m;j++){
                if(grid[i][j] == 1){
                    cnt++;
                }
            }
            row.push_back(cnt-(n-cnt));
        }
        for(int i=0;i<m;i++){
            int cnt = 0;
            for(int j=0;j<n;j++){
                if(grid[j][i] == 1){
                    cnt++;
                }
            }
            col.push_back(cnt-(m - cnt));
        }
        vector<vector<int>> ans(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[i][j] = (row[i] + col[j]);
            }
        }
        return ans;
    }
};