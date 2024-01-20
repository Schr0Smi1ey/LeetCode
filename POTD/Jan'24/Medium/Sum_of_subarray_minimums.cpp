class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> left(n,-1),right(n,n);
        stack<int> stk;
        for(int i=0;i<n;i++){
            while(!stk.empty() && arr[stk.top()] >= arr[i]){
                stk.pop();
            }
            if(!stk.empty()){
                left[i] = stk.top();
            }
            stk.push(i);
        }
        stk = stack<int>();
        for(int i=n-1;i>=0;i--){
            while(!stk.empty() && arr[stk.top()] > arr[i]){
                stk.pop();
            }
            if(!stk.empty()){
                right[i] = stk.top();
            }
            stk.push(i);
        }
        long long int sum = 0;
        long long int mod = 1e9 + 7;
        for(int i=0;i<n;i++){
            sum += static_cast<long long>(i-left[i])*(right[i] - i)*(arr[i]) % mod;
            sum %= mod;
        }
        return (int)sum;
    }
};