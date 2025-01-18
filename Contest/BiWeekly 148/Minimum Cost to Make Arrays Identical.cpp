class Solution {
public:
    long long minCost(vector<int>& arr, vector<int>& brr, long long k) {
        if(arr == brr) 
            return 0;
        long long cost1 = 0;
        for(int i = 0;i < arr.size();i++) {
            cost1 += (abs(arr[i] - brr[i]));
        }
        long long cost2 = 0;
        sort(arr.begin(),arr.end());
        sort(brr.begin(),brr.end());
        for(int i = 0;i < arr.size();i++) {
            cost2 += (abs(arr[i] - brr[i]));
        }
        if(cost1 <= cost2 + k)
            return cost1;
        return cost2 + k;
    }
};©leetcode