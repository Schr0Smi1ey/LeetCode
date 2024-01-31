#include<bits/stdc++.h>
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n,0);
        stack<pair<int,int>> stk;
        stk.push({arr[0],0});
        for(int i=1;i<n;i++){
            while(!stk.empty() && stk.top().first < arr[i]){
                ans[stk.top().second] = i - stk.top().second;
                stk.pop();
            }
            stk.push({arr[i],i});
        }
        return ans;
    }
};