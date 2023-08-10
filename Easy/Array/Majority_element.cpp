// HashMap approach : 
// Time complexity : O(N)
// Space Complexity : O(N)
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        unordered_map<int,int> mp;
        for(auto x:nums)
        {
            mp[x]++;
        }
        for(auto x : mp)
        {
            if(x.second > (nums.size()/2))
            {
                return x.first;
            }
        }
        return -1;
    }
};

// Sorting Approach 
// Time complexity : O(NlogN)
// Space Complexity : O(1)
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n/2];
    }
};

// Moore's voting algorithm -----> Best Approach
// Time complexity : O(N)
// Space Complexity : O(1)
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int count = 0,major_element;
        for(auto x : nums)
        {
            if(count == 0)
            major_element = x;

            if(x == major_element)
            count++;
            else 
            count--;
        }
        return count;
    }
};

