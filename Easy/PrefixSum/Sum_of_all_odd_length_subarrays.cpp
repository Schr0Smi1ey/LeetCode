class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {

        // TC: O(N^3)

        // int sum = 0,n = arr.size();
        // for(int i = 1;i <= n;i += 2){
        //     for(int j = 0;j <= (n-i); j++){
        //         for(int k = j;k < (j + i);k++){
        //             sum += arr[k];
        //         }
        //     }
        // }
        // return sum;

        // TC: O(N)
        
        int sum = 0,n = arr.size();
        for(int i=0;i<n;i++){
            sum += ((((i+1)*(n-i))+1)/2)*arr[i];
        }
        return sum;
    }
};