class Solution {
    private:
        bool isPalindrome(string s,int i ,int j){
            while(i < j){
                if(s[i++] != s[j--]) return false;
            }
            return true;
        }
public:
    int countSubstrings(string s){
        // int ans = s.size(),n = s.size(); // The initial ans will be the size of the string as every single character is palindrome
        // int i = 1;

        // for(int i=1;i<n;i++){ // Considering the consecutive word
        //     int temp = 1;
        //     while(s[i] == s[i-1]){
        //         temp++;
        //         if(i + 1 < n && s[i+1] != s[i]){
        //             break;
        //         }
        //         else i++;
        //     }
        //     if(temp > 1){
        //         ans += ((temp*(temp+1))/2 - temp);
        //     }
        // }
        // for(int i=1;i<n;i++){ // Considering the odd length palindrome
        //     int p = i - 1,q = i+1,temp = i;bool flag = true;
        //     while(p >= 0 && q < n && s[p] == s[q]){
        //         if(s[p] == s[temp] && flag){ // Ignoring Consecutive words as we already considered
        //             p--;q++;continue;
        //         }
        //         else flag = false;
        //         ans++;p--;q++;
        //     }
        // }
        // for(int i=2;i<n;i++){ // Considering the even length palindrome
        //     int p = i - 2,q = i+1,temp = i;bool flag = true;
        //     while(p >= 0 && q < n && s[temp] == s[temp - 1] && s[p] == s[q]){
        //         if(s[p] == s[temp] && flag){ // Ignoring Consecutive words as we already considered
        //             p--;q++;continue;
        //         }
        //         else flag = false;
        //         ans++;p--;q++;
        //     }
        // }
        // return ans;


        int ans = 0,n = s.size();
        for(int i=0;i<n;i++){
            for(int j = i;j<n;j++){
                if(isPalindrome(s,i,j)){
                    ans++;
                }
            }
        }
        return ans;
    }
};