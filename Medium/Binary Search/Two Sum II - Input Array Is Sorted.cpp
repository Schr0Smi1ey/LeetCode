class Solution {
public:
    int search(vector<int>&arr,int low,int target){
        int high = arr.size() - 1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(arr[mid] == target){
                return mid;
            }
            else if(arr[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return 0;
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i = 0;i < numbers.size();i++){
            int need = target - numbers[i],ind = search(numbers,i+1,need);
            if(ind){
                return {++i,++ind};
            }
        }
        return {-1,-1};
    }
};