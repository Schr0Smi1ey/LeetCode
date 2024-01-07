class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int fre[32] = {0}, n = nums.size();
        for(int i=0;i< n;i++){
            bitset<32> bs(nums[i]);
            for(int i=0;i<32;i++){
                if(bs[i]) fre[i]++;
            }
        }
        int ans = 0;bitset<32> bs(k);
        for(int i=0;i<32;i++){
            fre[i] %= 2;
            if(bs[i] != fre[i]){
                ans++;
            }
        }
        return ans;
    }
};