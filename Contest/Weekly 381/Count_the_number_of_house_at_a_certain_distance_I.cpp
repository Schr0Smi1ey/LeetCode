class Solution {
public:
    vector<int> countOfPairs(int n, int x, int y) {
        vector<int> distance(n,0);
        if(x > y) swap(x,y);
        for(int i=1;i<=n;i++){
            for(int j = i+1;j<=n;j++){
                int dis = min(abs(i-j),abs(x - i) + 1 + abs(y-j));
                distance[dis-1] += 2;
            }
        }
        return distance;
    }
};