class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        // int n = nums.size();
        // vector<int> temp;
        // temp.push_back(nums[0]);
        // for(int i=1;i<n;i++){
        //     if(nums[i] > temp.back()){
        //         temp.push_back(nums[i]);
        //     }
        //     else{
        //         int ind = lower_bound(temp.begin(),temp.end(),nums[i]) - temp.begin();
        //         temp[ind] = nums[i];
        //     }
        // }
        // return temp.size() >= 3;
        
        int n = nums.size();
        int a = INT_MAX,b = INT_MAX;
        for(auto x : nums){
            if(x <= a){
                a = x;
            }
            else if(x <= b){
                b = x;
            }
            else return true;
        }
        return false;
    }
};