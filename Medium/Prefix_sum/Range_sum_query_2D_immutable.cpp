class NumMatrix {
public:
    vector<vector<int>> arr;
    NumMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size(),m = matrix[0].size();
        arr.resize(n+5,vector<int>(m + 5));
        for(int i = 0;i < (n+5);i++){
            for(int j = 0;j < (m+5); j++){
                arr[i][j] = 0;
            }
        }
        for(int i = 1; i <= n;i++){
            for(int j = 1;j <= m; j++){
                arr[i][j] += matrix[i-1][j-1] + arr[i-1][j] + arr[i][j-1] - arr[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        row1++;col1++;row2++;col2++;
        return (arr[row2][col2] - arr[row1-1][col2] - arr[row2][col1-1] + arr[row1-1][col1-1]);
    }
};
