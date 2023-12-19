class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        // int fb = 0,lb = 0,fl = INT_MAX,ll = INT_MAX;
        // int n = nums.size();
        // for(int i=0;i<n;i++){
        //     if(nums[i] > fb){
        //         lb = fb;
        //         fb = nums[i];
        //     }
        //     else{
        //         lb = max(lb,nums[i]);
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     if(nums[i] < fl){
        //         ll = fl;
        //         fl = nums[i];
        //     }
        //     else{
        //         ll = min(ll,nums[i]);
        //     }
        // }
        // return (fb*lb - fl*ll);
        
        int n = nums.size();
        sort(nums.begin(),nums.end());
        return (nums[n-1]*nums[n-2] - (nums[0]*nums[1]));
    }
};