class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int ans = 100,i = 0,j = 0,n = nums.size();
        for(int i=0;i < n;i++){
            int val = 0,temp = 0;
            for(int j = i;j < n;j++){
                val |= nums[j];
                temp++;
                if(val >= k){
                    ans = min(ans,temp);
                    break;
                }
            }
        }
        if(ans != 100) 
            return ans;
        return -1;
    }
};