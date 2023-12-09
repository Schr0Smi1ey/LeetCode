class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v(2,0);
        int n = nums1.size(),m = nums2.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums1[i] ==  nums2[j]) {
                    v[0]++;break;
                }
            }
        }
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(nums2[i] ==  nums1[j]){
                    v[1]++;break;
                }
            }
        }
        return v;
    }
};