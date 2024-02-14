class Solution {
public:
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
        int cnt = 0,n = nums.size(),m = pattern.size();
        int size = m + 1;
        for(int i=0;i<n;i++){
            bool flag = true;int k = 0;
            for(int j = i;j < n - 1 && k < m;j++,k++){
                if(pattern[k] == 0){
                    flag &= (nums[j] == nums[j+1]);
                }
                else if(pattern[k] == 1){
                    flag &= (nums[j] < nums[j+1]);
                }
                else{
                    flag &= (nums[j] > nums[j+1]);
                }
            }
            if(flag && k == m) cnt++;
        }
        return cnt;
    }
};