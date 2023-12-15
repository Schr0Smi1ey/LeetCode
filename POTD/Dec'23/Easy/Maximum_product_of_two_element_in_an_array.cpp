class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int first = 0, second = 0;
        for(auto x : nums){
            if(x > first){
                second = first;
                first = x;
            }
            else{
                second = max(second,x);
            }
        }
        return ((first-1)*(second-1));
    }
};