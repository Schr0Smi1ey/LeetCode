class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.rbegin(),happiness.rend());
        long long int ans = 0,flag = 0;
        for(auto x : happiness){
            if(k <= 0) break;
            ans += max(0LL,x - flag);
            k--;flag++;
        }
        return ans;
    }
};