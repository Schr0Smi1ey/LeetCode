class Solution {
public:
    int removeElement(vector<int>& arr, int val) 
    {
        vector<int> v(arr.size());
        int k = 0,j=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]!=val)
            {
                v[k++] = arr[i];
            }
        }
        arr.clear();
        arr.resize(v.size());
        for(auto x : v)
        {
            arr[j++]=x;
        }
        return k;
    }
};