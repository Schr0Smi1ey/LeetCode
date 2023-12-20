#include<bits/stdc++.h>
class Solution {
public:
     bool palin(string num){
            string temp  = num;
            reverse(num.begin(),num.end());
            return num == temp;
        }
        long long closest(int num,bool flag) {
            long long ans = num;
            while (true && flag) {
                if(palin(to_string(ans)))
                    return ans;
                ans--;
            }
            while (true && !flag) {
                if(palin(to_string(ans)))
                    return ans;
                ans++;
            }
            return 0;
        }
    long long minimumCost(vector<int>& nums) {
        sort(nums.begin(),nums.end());
            long long n = nums.size(),cost1 = 0,cost2 = 0,mid = n / 2,target;
        target = (n%2)?nums[mid]:(nums[mid]+nums[mid-1])/2;
        pair<int,int> p = {closest(target,true),closest(target,false)};
        for (int i = 0; i < n; ++i) {
            cost1 += abs(nums[i] - p.first);
        }
        for (int i = 0; i < n; ++i) {
            cost2 += abs(nums[i] - p.second);
        }
        return min(cost1,cost2);
    }
};