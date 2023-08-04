class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) 
    {
        int ans  = INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            int count = 0;
            while(i<arr.size() && arr[i]==1)
            {
                count++;i++;
            }
            ans = max(ans,count);
        }
        return ans;
    }
};