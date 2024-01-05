class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        // int n = bank.size();
        // vector<int> v(n,0);
        // for(int i=0;i<n;i++){
        //     int temp = 0;
        //     for(int j = 0;j < bank[i].size();j++){
        //         if(bank[i][j] == '1') temp++;
        //     }
        //     v[i] = temp;
        // }
        // int ans = 0,last;bool flag = true;
        // for(int i=0;i<n;i++){
        //     if(v[i] && flag){
        //         last = v[i];flag = false;continue;
        //     }
        //     if(v[i]){
        //         ans += (v[i]*last);
        //         last = v[i];
        //     }
        // }
        // return ans;
        
        int n = bank.size();
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            v[i] = count(bank[i].begin(),bank[i].end(),'1');
        }
        int ans = 0,last;bool flag = true;
        for(int i=0;i<n;i++){
            if(v[i] && flag){
                last = v[i];flag = false;continue;
            }
            if(v[i]){
                ans += (v[i]*last);
                last = v[i];
            }
        }
        return ans;
    }
};