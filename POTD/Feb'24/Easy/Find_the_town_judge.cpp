class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        set<int> st;
        int total = (n*(n+1))/2, sum = 0;
        unordered_map<int,int> mp;
        for(auto x : trust){
            if(st.insert(x[0]).second){
                st.insert(x[0]);
                sum += x[0];
            }
            mp[x[1]]++;
        }
        if(sum == total || mp[total-sum] != n-1) return -1;
        return total - sum;
    }
};