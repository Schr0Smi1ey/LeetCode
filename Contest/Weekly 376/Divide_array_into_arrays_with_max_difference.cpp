class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& arr, int k) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans = {{arr[0]}},empty;
        if(n % 3 != 0){
            return empty;
        }
        for(int i=1;i<n;i++){
            if(ans.back().size() <= 2){
                if((ans.back().size() == 1 && arr[i] - arr[i-1] <= k) || (arr[i] - arr[i-1] <= k && arr[i]-arr[i-2] <= k)){
                        ans.back().push_back(arr[i]);
                }
                else{
                    return empty;
                }
            }
            else{
                ans.push_back({arr[i]});
            }
        }
        return ans;
    }
};