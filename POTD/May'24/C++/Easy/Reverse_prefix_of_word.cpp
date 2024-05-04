class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.find(ch);
        if(n != string::npos){
            int i = 0,j = n;
            while(i < j){
                swap(word[i],word[j]);
                i++;j--;
            }
        }
        return word;
    }
};