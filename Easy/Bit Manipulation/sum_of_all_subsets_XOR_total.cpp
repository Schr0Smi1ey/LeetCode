class Solution 
{
    // Time complexity : O(n*2^n)
public:
    int subsetXORSum(vector<int>& nums) 
    {
        int sum = 0,temp_sum;
        for(int i=0;i<(1<<nums.size());i++) // 2^n subset will be generated
        {
            temp_sum = 0;
            for(int j=0;j<nums.size();j++) // generating subset
            {
                if(i&(1<<j))
                temp_sum^=nums[j];
            }
            sum+=temp_sum;
        }
        return sum;
    }
};