class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x: nums){
            if(x < 0)
                mp[x]++;
        }
        int ans = -1;
        for(auto x: nums){
            if(x > ans)
                if(mp.find(-x) != mp.end())
                    ans = max(ans,x);
        }
        return ans;
    }
};