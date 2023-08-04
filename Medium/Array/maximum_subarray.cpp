class Solution {
public:
    int maxSubArray(vector<int>& arr)
    {
        int sum_last = INT_MIN,sum_here = 0;
        for(int i=0;i<arr.size();i++)
        {
            sum_here+=arr[i];
            sum_last = max(sum_last,sum_here);
            if(sum_here<0)
            sum_here = 0;
        }
        return sum_last;
    }
};