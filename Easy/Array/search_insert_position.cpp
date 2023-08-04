class Solution {
public:
    int search(vector<int> &arr,int target)
    {
        int low = 0,high = arr.size()-1,mid;
        while(low<=high)
        {
            mid = low + (high-low)/2;
            if(arr[mid]==target)
            return mid;
            else if(arr[mid]>target)
            high = mid -1;
            else
            low = mid+1;
        }
        return mid;
    }
    int searchInsert(vector<int>& nums, int target) 
    {
        int ans = search(nums,target);
        if(nums[ans]>=target)
        return ans;
        // else if(nums[ans]>target)
        // {
        //     // if(ans==0)
        //     // return ans;
        //     // else
        //     // return ans-1;
        //     return ans;
        // }
        else
        return ans+1;
    }
};