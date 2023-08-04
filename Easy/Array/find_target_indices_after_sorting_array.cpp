class Solution {
public:
    vector<int> targetIndices(vector<int>& arr, int target) 
    {
        sort(arr.begin(),arr.end());
        vector<int> result;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==target)
            {
                result.push_back(i);
            }
        }
        return result;
    }
};