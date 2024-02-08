class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        vector<vector<string>> v;
        int n = str.size();
        unordered_map<string,vector<string>> mp;
        for(auto x : str){
            string temp = x;
            sort(x.begin(),x.end());
            mp[x].push_back(temp);
        }
        for(auto x : mp){
            v.push_back(x.second);
        }
        return v;
    }
};