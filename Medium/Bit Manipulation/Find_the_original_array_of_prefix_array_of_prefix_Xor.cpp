class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        // vector<int> ans;
        // ans.push_back(pref[0]);
        // int flag = 0;
        // for(int i=1;i<pref.size();i++){
        //     flag ^= ans.back();
        //     ans.push_back(flag^pref[i]);
        // }
        // return ans;

        // vector<int> ans(pref.size(),0);
        // ans[0] = pref[0];
        // for(int i=1;i<pref.size();i++){
        //     ans[i] = (pref[i-1] ^ pref[i]);
        // }
        // return ans;

        int n = pref.size();
        for(int i = n-1 ; i > 0 ;i--){
            pref[i] = pref[i] ^ pref[i-1];
        }
        return pref;
    }
};