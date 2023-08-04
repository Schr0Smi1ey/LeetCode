class Solution {
public:
    bool check(vector<int>& arr) 
    {
        if(is_sorted(arr.begin(),arr.end()))
        return true;
        int last;
        vector<int> v;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>arr[i+1])
            {
                last = i+1;
                break;
            }
        }
        for(int i=last;i<arr.size();i++)
        {
            v.push_back(arr[i]);
        }
        for(int i=0;i<last;i++)
        {
            v.push_back(arr[i]);
        }
        return is_sorted(v.begin(),v.end());
    }
};