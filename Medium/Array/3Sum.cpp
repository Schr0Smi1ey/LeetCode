class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        vector<vector<int>> ans;
        unordered_map<int,int> mp;
        set<vector<int>> st;
        sort(v.begin(),v.end());
        for(int i = 0;i<v.size();i++){
            mp[v[i]] = i;
        }
        for(int i = 0;i<v.size();i++){
            if(i && v[i] == v[i-1]) continue;
            for(int j = i+1;j < v.size();j++){
                int need = (0 - (v[i] + v[j]));
                if(mp.find(need) == mp.end()) continue;
                int z = mp[need];
                if(z > i && z > j && st.insert({v[i],v[j],need}).second){
                    ans.push_back({v[i],v[j],need});
                }
            }
        }
        return ans;
    }
};