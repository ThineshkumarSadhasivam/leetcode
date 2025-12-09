class Solution {
public:
    bool isPalindrome(int n) {
        long int digit,rev=0;
        long int x=n;
        while(n>0){
            digit=n%10;
            rev=rev*10+digit;
            n=n/10;
        }
        if(rev==x)
            return 1;
        return 0;
    }
};