class Solution {
public:
    // int gcd(int a,int b)
    // {
    //     if(a==0)           // replaced by built in function(_gcd)
    //     return b;
    //     return gcd(b%a,a);
    // }
    int first_digit(int n)
    {
        int temp =0;
        while(n!=0)
        {
            temp=n%10;
            n/=10;
        }
        return temp;
    }
    int countBeautifulPairs(vector<int>& nums) 
    {
        int count = 0;
        for(int i=0;i<nums.size();i++)
        {
            int temp = first_digit(nums[i]);
            for(int j=i+1;j<nums.size();j++)
            {
                if(__gcd(temp,nums[j]%10)==1)
                {
                    count++;
                }                           
            }
                           
        }
        return count;
    }
};