class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int ans = 0,k = 1;
        while(n){
            if(n >= 8){
                ans += (k*8);
                k++;
                n -= 8;
            }
            else{
                ans += (k*n);break;
            }
        }
        return ans;
    }
};