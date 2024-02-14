class Solution {
    private:
        bool isPalindrome(string str){
            int i = 0, j = str.size() - 1;
            while(i < j){
                if(str[i++] != str[j--])
                    return false;
            }
            return true;
        }
public:
    string firstPalindrome(vector<string>& words) {
        for(auto x : words){
            if(isPalindrome(x))
                return x;
        }
        return "";
    }
};