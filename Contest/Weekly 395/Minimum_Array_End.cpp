class Solution {
public:
    long long minEnd(int n, int x) {
        bitset<64> bs(x);
        bitset<64> bs1(n-1);
        int m = 0;
        while(n > 0){
            m++;n /= 2;
        }
        int i = 0,j = 0;
        while(j < m){
            if(bs[i] ==  1){ // The bits that are set in x , must be set in all numbers
                i++;continue;
            }
            bs[i] = bs1[j]; // setting left unset bit to their (n-1)th combination by 0 and 1
            i++;j++;
        }
        return bs.to_ullong();
    }
};