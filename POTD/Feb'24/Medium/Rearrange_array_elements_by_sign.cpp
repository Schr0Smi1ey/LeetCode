class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // vector<int> pos,neg,ans;
        // for(auto x : nums){
        //     if(x < 0){
        //         neg.emplace_back(x);
        //     }
        //     else{
        //         pos.emplace_back(x);
        //     }
        // }
        // for(int i=0;i<pos.size();i++){
        //     ans.emplace_back(pos[i]);
        //     ans.emplace_back(neg[i]);
        // }
        // return ans;

        int n = nums.size();
        vector<int> ans(n,0);
        int pos = 0 , neg = 1;
        for(int i = 0;i < n;i++){
            if(nums[i] < 0){
                ans[neg] = nums[i];
                neg += 2;
            }
            else{
                ans[pos] = nums[i];
                pos += 2;
            }
        }
        return ans;
    }
};