class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> arr(31, 0);
        for (int i = 0; i < 31; i++) {
            arr[i] = (1 << i);
        }
        vector<int> ans;
        for(auto x : nums) {
            bool flag = false;
            int minima = INT_MAX;
            for(int i = 0;i < 31; i++) {
                int y = arr[i];
                if(y > x)
                    break;
                int temp = (x - y);
                if((temp | (temp + 1)) == x) {
                    minima = (minima, temp);
                }
            }
            if(minima != INT_MAX) {
                ans.push_back(minima);
            }
            else { 
                ans.push_back(-1);
            }
        }
        return ans;
    }
};