class Solution {
public:
    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(),m = nums2.size();
        int ans = INT_MAX;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        for(int i = 0;i < n;i++){
            for(int j = i+1;j < n;j++){
                int p = 0,q = 0;
                set<int> st;
                while(q < m){
                    if(p == i || p == j){
                        p++;continue;
                    }
                    st.insert(nums2[q] - nums1[p]);
                    p++;q++;
                }
                if(st.size() == 1){
                    ans = min(ans,*(st.begin()));
                }
            }
        }
        return ans;
    }
};