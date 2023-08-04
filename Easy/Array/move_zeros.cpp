class Solution {
public:
    void moveZeroes(vector<int>& a) 
    {
        int zero = 0;
        vector<int> result;
        for(auto x:a)
        {
            if(x==0)
            zero++;
            else
            result.push_back(x);
        }
        a.clear();
        for(auto x:result)
        {
            a.push_back(x);
        }
        while(zero--)
        {
            a.push_back(0);
        }
    }
};