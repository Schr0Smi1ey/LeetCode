class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        // int fl = INT_MAX,sl = INT_MAX;
        // for(int i=0;i<prices.size();i++){
        //     if(prices[i] < fl){
        //         sl = fl;
        //         fl = prices[i];
        //     }
        //     else{
        //         sl = min(sl,prices[i]);
        //     }
        // }
        // return (money-fl-sl < 0)?money:money-fl-sl;
        sort(prices.begin(),prices.end());
        int fl = prices[0],sl = prices[1];
        return (money-fl-sl < 0)?money:money-fl-sl;
    }
};