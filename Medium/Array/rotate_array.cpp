class Solution {
public:
    void rotate(vector<int>& arr, int k) 
    {
        k = k%(arr.size());
        reverse(arr.end()-k,arr.end());
        reverse(arr.begin(),arr.end()-k);
        reverse(arr.begin(),arr.end());
    }
};