class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) 
    {
        unordered_map<int,int> mp;
        for(int i = 0; i<arr.size();i++)
        {
            if(mp.count(target-arr[i]))
            return {mp[target-arr[i]],i};
            mp[arr[i]] = i;
        }
        return {-1,-1};
    }
};