class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>> ans;
        int n = land.size(),m = land[0].size();
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                if(land[i][j] == 1){
                    int r = i,c = j;
                    for(r = i;r < n && land[r][j];r++){
                        for(c = j;c < m && land[r][c];c++){
                            land[r][c] = 0;
                        }
                    }
                    ans.push_back({i,j,r-1,c-1});
                }
            }
        }
        return ans;
    }
};