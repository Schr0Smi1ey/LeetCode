class Solution {
public:
    int bitwiseComplement(int n) 
    {
        if(n==0) // corner case...for this the loop will never be excute means won't flip
        return 1;
        bitset<64> bs(n);
        for(int i=bs.size()-1;i>=0;i--)
        {
            if(bs[i]==true)
            {
                while(true)
                {
                    bs[i].flip();
                    i--;
                    if(i<0)
                    break;
                }
            }
        }   
        return bs.to_ullong();
    }
};