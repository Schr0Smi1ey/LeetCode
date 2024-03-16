class Solution {
public:
    string customSortString(string order, string s) {
        set<char> st;
        map<char,int> mp;
        for(auto ch : s){
            st.insert(ch);
            mp[ch]++;
        }
        string ans = "";
        for(auto x : order){
            int temp = mp[x];
            while(temp--){
                ans += x;
            }
            mp[x] = 0;
        }
        for(auto x : st){
            int temp = mp[x];
            while(temp--){
                ans += x;
            }
        }
        return ans;
    }
};