class Solution {
public:
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{
    int i,j,k;
    int temp_len = m;
    vector<int> temp(nums1.begin(),nums1.begin()+m);
    i=0,j=0,k=0;
    while(i<temp_len && j<n)
    {
        if(temp[i]<=nums2[j])
        {
            nums1[k++]=temp[i++];
        }
        else
        {
            nums1[k++]=nums2[j++];
        }
    }
    while(i<temp_len)
    {
        nums1[k++]=temp[i++];
    }
    while(j<n)
    {
        nums1[k++]=nums2[j++];
    }
}
};