class Solution {
public:
    bool isPowerOfFour(int n) 
    {
        if(n==INT32_MIN) // corner case
        return false;
        if(n==0 or (n&(n-1))!=0)
        return false;
        while((n&1)==0)
        {
            n>>=2;
            if(n<4 and n!=1) // break case
            return false;
        }
        return n==1;
    }
};

class Solution {
public:
    bool isPowerOfFour(int n) 
    {
        while(n%4==0)
        {
            n/=4;
        }
        return n==1;
    }
};


