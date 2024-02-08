class Solution {
public:
    bool areSimilar(vector<vector<int>>& arr, int k) {
        int n = arr.size(),m = arr[0].size();
        k %= m;
        for(int i=0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(i&1){
                    if(arr[i][j] != arr[i][(j-k+m)%m])
                        return false;
                }
                else{
                    if(arr[i][j] != arr[i][(j+k)%m])
                        return false;
                }
            }
        }
        return true;
    }
};