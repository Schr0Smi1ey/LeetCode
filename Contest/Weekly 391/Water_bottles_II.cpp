class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles;
        int remain = numBottles;
        while(remain >= numExchange){
            ans++;
            remain -= numExchange;
            remain++;
            numExchange++;
        }
        return ans;
    }
};