class Solution {
public:

    // Dutch National flag algorithm
    void sortColors(vector<int>& arr) 
    {
        int st = 0 ,i = 0, end = arr.size() - 1;
        while(i <= end)
        {
            if(arr[i] == 0)
            {
                swap(arr[i++], arr[st++]);
            }
            else if(arr[i] == 2)
            {
                swap(arr[i], arr[end--]);
            }
            else 
            {
                i++;
            }
        }
    }
};
