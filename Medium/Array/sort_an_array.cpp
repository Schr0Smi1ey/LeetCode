class Solution {
public:
    void merge(vector<int>& arr,int low,int mid,int high)
    {
        int len1 = mid-low+1;
        int len2 = high - mid;
        vector<int> temp1(len1);
        vector<int> temp2(len2);
        for(int i=0;i<len1;i++)
        {
            temp1[i]=arr[i+low];
        }
        for(int i=0;i<len2;i++)
        {
            temp2[i]=arr[mid+1+i];
        }
        int i=0,j=0;
        while(i<len1 && j<len2)
        {
            if(temp1[i]>temp2[j])
            {
                arr[low++]=temp2[j++];
            }
            else
            {
                arr[low++]=temp1[i++];
            }
        }
        while(i<len1)
        {
            arr[low++]=temp1[i++];
        }
        while(j<len2)
        {
            arr[low++]=temp2[j++];
        }
    }
    void merge_sort(vector<int> &arr,int low,int high)
    {
        if(low<high)
        {
            int mid = low + (high-low)/2;
            merge_sort(arr,low,mid);
            merge_sort(arr,mid+1,high);
            merge(arr,low,mid,high);
        }
    }
    vector<int> sortArray(vector<int>& nums) 
    {
        merge_sort(nums,0,nums.size()-1);
        return nums;
    }
};