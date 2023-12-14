class Solution {
public:
    int n,m;
    bool check(vector<vector<int>>& mat,int i,int j){
        for(int k=0;k<m;k++){
            if(k == j)continue;
            if(mat[i][k]) return false;
        }
        cout << endl;
        for(int k=0;k<n;k++){
            if(k == i) continue;
            if(mat[k][j]) return false;
        }
        return true;
    }
    int numSpecial(vector<vector<int>>& mat) {
        int cnt = 0;n = mat.size(),m = mat[0].size();
        for(int i=0;i<n;i++){
            for(int j = 0;j < m;j++){
                if(mat[i][j] && check(mat,i,j)){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};