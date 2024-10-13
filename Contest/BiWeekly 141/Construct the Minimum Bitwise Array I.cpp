class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        for(auto x : nums) {
            bool flag = true;
            for(int i = 0;i <= 1000; i++) {
                if((i | (i + 1)) == x) {
                    ans.push_back(i);
                    flag = false;
                    break;
                }
            }
            if(flag)
                ans.push_back(-1);
        }
        return ans;
    }
};