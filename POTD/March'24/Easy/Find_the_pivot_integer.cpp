class Solution {
public:
    int pivotInteger(int n) {
        int low = 1,high = n;
        while(low <= high){
            int mid = (high + low)/2;
            int sum1 = (mid*(mid+1))/2;
            int sum2 = (n*(n+1))/2 - (mid*(mid-1))/2;
            if(sum1 == sum2){
                return mid;
            }
            else if(sum1 > sum2){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return -1;
    }
};