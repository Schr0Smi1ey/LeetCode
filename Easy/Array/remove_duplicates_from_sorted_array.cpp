class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int k = 1,j=0;
        stack<int> result;
        result.push(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==result.top())
            {
                result.pop();
                result.push(nums[i]);
            }
            else
            result.push(nums[i]);
        }
        nums.clear();
        nums.resize(result.size());
        while(!result.empty())
        {
            nums[j]=result.top();
            j++;
            result.pop();
        }
        reverse(nums.begin(),nums.end());
        return nums.size();
    }
};



// using set
// less optimal in runtime and memory than the previous
class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        set<int> myset;
        for(auto x:nums)
        {
            myset.insert(x);
        }
        nums.clear();
        nums.resize(myset.size());
        int i=0;
        for(auto x:myset)
        {
            nums[i++]=x;
        }
        return nums.size();
    }
};