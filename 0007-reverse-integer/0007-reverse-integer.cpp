class Solution {
public:
    int reverse(int x) {
        long long rev=0,digit;
        while(x){
            digit=x%10;
            rev=rev*10+digit;
            x/=10;
        }
        if(rev>INT_MAX || rev<INT_MIN)
            return 0;
        return rev;
    }
};