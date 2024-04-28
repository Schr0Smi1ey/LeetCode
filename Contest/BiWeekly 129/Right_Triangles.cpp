class Solution {
public:
    long long numberOfRightTriangles(vector<vector<int>>& grid) {
        int n = grid.size(),m = grid[0].size();
        vector<int> row(n,0);
        for(int i = 0;i <n;i++){
            for(int j = 0;j < m;j++){
                row[i] += (grid[i][j] == 1);
            }
        }
        vector<int> col(m,0);
        for(int i = 0;i < m;i++){
            for(int j = 0;j < n;j++){
                col[i] += (grid[j][i] == 1);
            }
        }
        long long ans = 0;
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                if(grid[i][j] == 1){
                    ans += ((col[j] - 1) * (row[i] - 1));
                }
            }
        }
        return ans;
    }
};