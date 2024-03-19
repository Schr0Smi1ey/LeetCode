class Solution {
public:
// concept : multiply total with (number of zeros between two 1's)
    bool isone(int n)
    {
        return n==1;
    }
    int numberOfGoodSubarraySplits(vector<int>& nums) 
    {
        int temp = 0;
        long long int total = 1,lastoneindex = -1,onecount = 0,mod = 1e9+7;
        for(int i=0;i<nums.size();i++)
        {
            if(isone(nums[i]))
            {
                temp++;
                if(onecount==0 && lastoneindex!=-1)
                {
                    total = (total*(i-lastoneindex))%mod;
                }
                onecount++;
                if(onecount==1)
                {
                    onecount=0;
                    lastoneindex=i;
                }
            }

       }
    if(temp)
    return total;
    else
    return 0;
            
    }
};