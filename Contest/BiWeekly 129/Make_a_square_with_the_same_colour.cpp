class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        bool ans = false;
        for(int i = 0;i < 2;i++){
            int cntb = 0,cntw = 0;
            for(int j = 0;j < 2;j++){
                grid[i][j] == 'B'?cntb++:cntw++;
                grid[i][j+1] == 'B'?cntb++:cntw++;
                grid[i+1][j] == 'B'?cntb++:cntw++;
                grid[i+1][j+1] == 'B'?cntb++:cntw++;
                ans |= (cntb >= 3 || cntw >= 3);
                cntb = 0,cntw = 0;
            }
        }
        return ans;
    }
};