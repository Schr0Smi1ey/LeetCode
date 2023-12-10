class Solution {
public:
    int modularExpo(int b,int p,int m){
        int result = 1;
        while(p){
            if(p & 1){
                result = (result * b) % m;
                p--;
            }
            b = (b * b) % m;
            p = (p >> 1);
        }
        return result;
    }
    vector<int> getGoodIndices(vector<vector<int>>& variables, int target) {
        vector<int> v;
        int n = variables.size();
        for(int i=0;i<n;i++){
            int a = variables[i][0];
            int b = variables[i][1];
            int c = variables[i][2];
            int m = variables[i][3];
            if(modularExpo(modularExpo(a,b,10),c,m) == target){
                v.push_back(i);
            }
        }
        return v;
    }
};