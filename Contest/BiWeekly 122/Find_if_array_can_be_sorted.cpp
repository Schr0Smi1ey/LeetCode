class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        if (is_sorted(nums.begin(), nums.end())) {
            return true;
        }
        int n = nums.size();
        vector<int> bits(n);
        for (int i = 0; i < n; i++) {
            bits[i] = __builtin_popcount(nums[i]);
        }
        for (int i = 0; i < n; i++) {
            if (i + 1 < n && bits[i] == bits[i + 1]) {
                int s = i;
                while (i + 1 < n && bits[i] == bits[i + 1]) {
                    i++;
                }
                int e = i;
                sort(nums.begin() + s, nums.begin() + e + 1);
            }
        }
        return is_sorted(nums.begin(), nums.end());
    }
};
