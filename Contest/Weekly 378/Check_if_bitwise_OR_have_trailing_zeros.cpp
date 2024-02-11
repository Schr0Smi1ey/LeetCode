class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i == j) continue;
                int x = (nums[i] | nums[j]);
                bitset<32> bs(x);
                if(bs[0] == 0){
                    return true;
                }
            }
        }
        return false;
    }
};