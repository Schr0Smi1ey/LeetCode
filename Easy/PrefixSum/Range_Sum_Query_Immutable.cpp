class NumArray {
public:
    vector<int> arr;
    NumArray(vector<int>& nums) {
        arr.resize(nums.size() + 5);
        arr[0] = 0;
        for(int i = 1; i <= nums.size();i++){
            arr[i] += (arr[i-1] + nums[i-1]);
        }
    }
    
    int sumRange(int left, int right) {
        left++;right++;
        return arr[right] - arr[left-1];
    }
};