class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int cnt = 0,n = batteryPercentages.size();
        for(int i=0;i<n;i++){
            if(batteryPercentages[i]) cnt++;
            else continue;
            for(int j=i+1;j<n;j++){
                batteryPercentages[j] = max(0,batteryPercentages[j] - 1);
            }
        }
        return cnt;
    }
};