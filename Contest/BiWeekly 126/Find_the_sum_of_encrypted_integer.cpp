class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int n = nums.size(), total = 0;
        for(int i = 0;i < n;i++){
            string str = to_string(nums[i]);
            int maxima = INT_MIN;
            for(auto x : str){
                maxima = max(x - '0',maxima);
            }
            str = string(str.size(),maxima + '0');
            total += stoi(str);
        }
        return total;
    }
};