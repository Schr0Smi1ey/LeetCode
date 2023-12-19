class Solution {
public:
    int drow[8] = {1,1,1,0,-1,-1,-1,0};
    int dcol[8] = {1,0,-1,-1,-1,0,1,1};
    int n,m;
    bool ok(int i,int j){
        return (i >= 0 && i < n && j >= 0 && j < m);
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        n = img.size(),m = img[0].size();
        vector<vector<int>> ans(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int total = img[i][j],cnt = 1;
                for(int k = 0;k < 8;k++){
                    int x = drow[k] + i;
                    int y = dcol[k] + j;
                    if(ok(x,y)){
                        total += img[x][y];
                        cnt++;
                    }
                }
                ans[i][j] = (total/cnt);
            }
        }
        return ans;
    }
};