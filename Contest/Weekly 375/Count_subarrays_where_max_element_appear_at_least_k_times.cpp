#include<bits/stdc++.h>
class Solution {
public:
    long long countSubarrays(vector<int>& arr, int k) {
        long long ans = 0;
        int m = *max_element(arr.begin(),arr.end()), n = arr.size();
        int right = 0,left = 0, mcnt = 0;
        while(right < n){
            if(arr[right] == m){
                mcnt++;
            }
            while(left < n && mcnt >= k){
                ans += n - right; // sub-array calculation
                if(arr[left] == m){
                    mcnt--;
                }
                left++;
            }
            right++;
        }
        return ans;
    }
};