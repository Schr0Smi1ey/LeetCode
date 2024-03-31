class Solution {
public:
    int minimumLevels(vector<int>& possible) {
        int n = possible.size();
        for(int i= 0;i < n;i++){
            if(possible[i] == 0){
                possible[i] = -1;
            }
        }
        int suffix[n],prefix[n];
        prefix[0] = possible[0];
        suffix[n-1] = possible[n-1];
        for(int i = 1;i < n;i++){
            prefix[i] = (prefix[i-1] + possible[i]);
        }
        for(int i = n-2;i >= 0;i--){
            suffix[i] = (suffix[i+1] + possible[i]);
        }
        for(int i = 0;i < n-1;i++){
            if(prefix[i] > suffix[i+1]){
                return i+1;
            }
        }
        return -1;
    }
};