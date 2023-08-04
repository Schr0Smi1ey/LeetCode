class Solution 
{
public:
    int missingNumber(vector<int>& nums) 
    {
        int total_xor_sum = 0, given_xor_sum = 0;
        for(int i=0;i<=nums.size();i++)
        {
            total_xor_sum ^= i;
            if(i<nums.size())
            given_xor_sum^=nums[i]; // properties : (x^x=0)
                                    // XOR is associative and cumulative(order doesn't matter)
        }
        return (total_xor_sum^given_xor_sum);
    }
};