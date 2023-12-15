class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,int> mp;
        set<string> st;
        for(int i=0;i<paths.size();i++){
            mp[paths[i][0]]++;
            st.insert(paths[i][0]);
            st.insert(paths[i][1]);
        }
        string ans;
        for(auto s : st){
            if(mp[s] == 0){
                ans = s;break;
            }
        }
        return ans;
    }
};