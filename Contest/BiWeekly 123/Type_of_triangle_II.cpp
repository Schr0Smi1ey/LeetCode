class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a = nums[0], b = nums[1], c = nums[2];
        if(a == b && b == c){
            return  "equilateral";
        }
        else if(a != b && b != c){
            if((a + b > c )) return "scalene";
        }
        else if(a == b || b == c || c == a){
            if(a + b > c) return "isosceles";
        }
        return "none";
    }
};