class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        // vector<int> v;
        // int n = points.size();
        // for(int i=0;i<n;i++){
        //     v.push_back(points[i][0]);
        // }
        // sort(v.begin(),v.end());
        // int ans = INT_MIN;
        // for(int i=1;i<v.size();i++){
        //     ans = max(ans,v[i]-v[i-1]);
        // }
        // return ans;

        sort(points.begin(),points.end());
        int ans = INT_MIN;
        for(int i = 1;i<points.size();i++){
            ans = max(ans,points[i][0] - points[i-1][0]);
        }
        return ans;
    }
};