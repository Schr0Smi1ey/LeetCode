class Solution {
public:
    int minimumArrayLength(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt = 0,n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] == nums[0]){
                cnt++;
            }
            if(nums[i] % nums[0]) return 1;
        }
        return (cnt+1)/2;
    }
};