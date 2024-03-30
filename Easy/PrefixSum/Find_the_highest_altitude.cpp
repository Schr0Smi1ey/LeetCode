class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int ans = 0 , var = 0;
        for(auto x : gain){
            var += x;
            ans = max(ans,var);
        }
        return ans;
    }
};