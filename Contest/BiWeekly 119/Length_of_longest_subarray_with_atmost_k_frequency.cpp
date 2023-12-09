#include<bits/stdc++.h>
class Solution {
public:
    int maxSubarrayLength(vector<int>& arr, int k) {
        int ans = -1e9,n = arr.size();
        map<int,int> mp;
        int i = 0,j = 0;
        while(i < n){
            mp[arr[i]]++;
            while(j < n && mp[arr[i]] > k){
                mp[arr[j]]--;
                j++;
            }
            ans = max(ans,i - j + 1);
            i++;
        }
        return ans;
    }
};