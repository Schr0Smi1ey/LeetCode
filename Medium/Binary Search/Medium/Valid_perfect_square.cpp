class Solution {
public:
    bool isPerfectSquare(int n) {
        int low = 0,high = n;
        while(low <= high){
            long long int mid = low + (high - low)/2;
            if(mid*mid == n) return true;
            else if(mid * mid < n) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }
};