class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        for(int i = 1;i < n; i++) {
            arr[i] ^= arr[i-1];
        }
        vector<int> ans;
        int q = queries.size();
        for(int i = 0; i < q; i++) {
            auto x = queries[i];
            ans.push_back((x[0] == 0? 0: arr[x[0] - 1]) ^ arr[x[1]]);
        }
        return ans;
    }
};