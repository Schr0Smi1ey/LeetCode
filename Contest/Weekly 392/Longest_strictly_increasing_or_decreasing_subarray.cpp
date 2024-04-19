class Solution {
public:
    int longestMonotonicSubarray(vector<int>& arr) {
        int n = arr.size();
        int ans = 1,temp = 1,j = 0;
        for(int i = 0;i < n -1;i++){
            if(arr[i] > arr[i+1]){
                temp = 1;j = i;
                while(j + 1 < n && arr[j] > arr[j+1]){
                    temp++;j++;
                }
                ans = max(ans,temp);
            }
            if(arr[i] < arr[i+1]){
                temp = 1;j = i;
                while(j + 1 < n && arr[j] < arr[j+1]){
                    temp++;j++;
                }
                ans = max(ans,temp);
            }
        }
        return ans;
    }
};