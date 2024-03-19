class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto x : points){
            int a = x[0],b = x[1];
            pq.push({a,b});
        }
        int ans = 1,maxima = pq.top().second;
        pq.pop();
        while(!pq.empty()){
            int a = pq.top().first,b = pq.top().second;
            if(a <= maxima){
                maxima = min(maxima,b);
            }
            else{
                ans++;maxima = b;
            }
            pq.pop();
        }
        return ans;
    }
};