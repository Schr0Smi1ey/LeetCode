class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        multiset<int> st;
        for(auto x : nums){
            st.insert(x*x);
        }
        vector<int> ans(st.begin(),st.end());
        return ans;
    }
};