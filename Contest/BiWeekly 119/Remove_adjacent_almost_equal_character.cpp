class Solution  {
public:
    int removeAlmostEqualCharacters(string str){
        int cnt = 0,n = str.size();
        for(int i=1;i<n;i++){
            if(abs(str[i] - str[i-1]) <= 1) {
                str[i] = '0';
                cnt++;
            }
        }
        return cnt;
    }
};