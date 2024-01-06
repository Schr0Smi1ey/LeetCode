class Solution {
public:
    int first(vector<int>& arr,int n,int target){
        int low = 0,high = n - 1,ans = -1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(arr[mid] == target){
                ans = mid;
            }
            if(arr[mid] >= target){
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
    int last(vector<int> &arr,int n,int target){
        int low = 0,high = n - 1,ans = -1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(arr[mid] == target){
                ans = mid;
                low = mid + 1;
            }
            else if(arr[mid] > target){
                high = mid -1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        return {first(nums,n,target),last(nums,n,target)};
    }
};