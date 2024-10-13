#include <bits/stdc++.h>
class Solution
{
public:
    static bool cmp(int a, int b)
    {
        string aa = to_string(a), bb = to_string(b);
        return ((aa + bb) > (bb + aa));
    }
    string largestNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end(), cmp);
        string str = "";
        for (auto x : nums)
        {
            str += to_string(x);
        }
        return (str[0] == '0') ? "0" : str;
    }
};