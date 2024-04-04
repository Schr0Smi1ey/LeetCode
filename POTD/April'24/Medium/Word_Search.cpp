class Solution {
public:
    int drow[4] = {0,-1,0,1};
    int dcol[4] = {1,0,-1,0};
    bool valid(int i,int j,int n,int m){
        return (i >= 0 && i < n && j >= 0 && j < m);
    }
    bool ans = false;
    void search(vector<vector<char>>& grid,int i,int j,int k,set<pair<int,int>>& st,string &word){
        ans |= (k == word.size());
        if(k >= word.size())
            return;
        for(int p = 0;p < 4;p++){
            int nr = i + drow[p];
            int nc = j + dcol[p];
            if(valid(nr,nc,grid.size(),grid[0].size()) && grid[nr][nc] == word[k] && (st.count({nr,nc}) == 0)){
                k++;
                st.insert({nr,nc});
                search(grid,nr,nc,k,st,word);
                k--;
                st.erase({nr,nc});
            }
        }
    }
    bool exist(vector<vector<char>>& grid, string word) {
        int n = grid.size(),m = grid[0].size();
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                if(grid[i][j] == word[0]){
                    set<pair<int,int>> st;
                    st.insert({i,j});
                    search(grid,i,j,1,st,word);
                }
            }
        }
        return ans;
    }
};