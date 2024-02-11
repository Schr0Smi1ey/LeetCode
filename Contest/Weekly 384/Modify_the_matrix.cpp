class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        for(int i=0;i<m;i++){
            vector<pair<int,int>> temp;
            int maxima = INT_MIN;
            for(int j=0;j<n;j++){
                if(matrix[j][i] == -1){
                    temp.push_back({j,i});
                }
                maxima = max(maxima,matrix[j][i]);
            }
            for(auto [x,y] : temp){
                matrix[x][y] = maxima;
            }
        }
        return matrix;
    }
};