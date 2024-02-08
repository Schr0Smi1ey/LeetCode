class Solution {
public:
    int findValueOfPartition(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int ans = INT_MAX;
        for(int i=1;i<arr.size();i++){
            ans = min(ans,arr[i] - arr[i-1]);
        }
        return ans;
    }
};