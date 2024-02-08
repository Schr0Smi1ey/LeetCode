class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int k = 0,ans = 0;
        while(mainTank > 0){
            ans += 10;
            mainTank--;
            k++;
            if(k >= 5){
                if(additionalTank > 0)
                mainTank++;
                additionalTank--;
                k = 0;
            }
        }
        return ans;
    }
};