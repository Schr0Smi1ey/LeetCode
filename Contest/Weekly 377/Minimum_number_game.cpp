class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        sort(nums.rbegin(),nums.rend());
        for(int i=1;i<n;i+=2){
            ans.push_back(nums[i]);
            ans.push_back(nums[i-1]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};