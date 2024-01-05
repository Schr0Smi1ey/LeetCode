class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int step = 0;
        for(auto x : mp){
            if(x.second == 1){
                return -1;
            }
            if(x.second % 3 == 0){
                step += (x.second/3);
            }
            else if(x.second % 3 == 1){
                step += 2;
                x.second -= 4;
                step += (x.second/3);
            }
            else if(x.second % 3 == 2){
                step += 1;
                x.second -= 2;
                step += (x.second/3);
            }
        }
        return step;
    }
};