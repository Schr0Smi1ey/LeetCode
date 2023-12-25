class Solution {
public:
    bool sorted(vector<int> &arr){
        int n = arr.size();
        for(int i=1;i<n;i++){
            if(arr[i] <= arr[i-1])return false;
        }
        return true;
    }
    int incremovableSubarrayCount(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        for(int i=0;i<n;i++){
            vector<int> temp;
            for(int j = i;j<n;j++){
                temp.push_back(j);
                vector<int> arr;
                for(int k = 0,z = 0;k<n;k++){
                    if(z < temp.size() && k == temp[z]){
                        z++;continue;
                    }
                    arr.push_back(nums[k]);
                }
                if(sorted(arr)){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};