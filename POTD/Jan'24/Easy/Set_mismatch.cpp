class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> v(2,0);
        for(auto x : nums){
            mp[x]++;
        }
        for(int i=1;i<= nums.size();i++){
            if(mp.find(i) == mp.end()){
                v[1] = i;
            }
            if(mp[i] == 2){
                v[0] = i;
            }
        }
        return v;
    }
};