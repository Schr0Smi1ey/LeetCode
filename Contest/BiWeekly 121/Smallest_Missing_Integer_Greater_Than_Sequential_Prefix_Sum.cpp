class Solution {
public:
    int missingInteger(vector<int>& arr) {
        int sum = 0,n = arr.size(),no = 0;
        set<int> st;
        for(int i=0;i<n;i++){
            st.insert(arr[i]);
            int temp = arr[i],cnt = 1;
            for(int j = 1;j<n;j++){
                if(arr[j] == arr[j-1] + 1){
                    temp += arr[j];cnt++;
                }
                else break;
            }
            if(cnt > no){
                sum = temp;no = cnt;
            }
        }
        for(int i=sum;i<=3000;i++){
            if(st.find(i) == st.end())
                return i;
        }
        return -1;
    }
};