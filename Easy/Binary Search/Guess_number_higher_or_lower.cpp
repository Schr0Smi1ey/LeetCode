class Solution {
public:
    int guessNumber(int n) {
        int low = 1,high = n , ans = -1;
        while(low <= high){
            int mid = low + (high - low)/2;
            int flag = guess(mid);
            if(flag == 0){
                ans = mid;break;
            }
            else if(flag == -1){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};