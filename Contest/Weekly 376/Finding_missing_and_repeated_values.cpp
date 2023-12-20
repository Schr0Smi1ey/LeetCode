class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int> mp;
        int n = grid.size(),m = grid[0].size();
        for(int i=0;i<n;i++){
            for(int j =0;j<m;j++){
                mp[grid[i][j]]++;
            }
        }
        int missing,twice;
        for(int i=1;i<=(n*n);i++){
            if(mp[i] == 0){
                missing = i;
            }
            if(mp[i] == 2){
                twice = i;
            }
        }
        return {twice,missing};
    }
};