class Solution {
public:
    int drow[4] = {0,-1,0,1};
    int dcol[4] = {1,0,-1,0};
    bool isValid(int i,int j,int n,int m){
        return (i >= 0 && i < n && j >= 0 && j < m);
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans = 0,n = grid.size(),m = grid[0].size();
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                int temp = 0;
                for(int k = 0;k < 4;k++){
                    temp += (isValid(i+drow[k],j+dcol[k],n,m) && grid[i+drow[k]][j+dcol[k]] == 1);
                }
                if(grid[i][j] == 1)
                    ans += (4 - temp);
            }
        }
        return ans;
    }
};