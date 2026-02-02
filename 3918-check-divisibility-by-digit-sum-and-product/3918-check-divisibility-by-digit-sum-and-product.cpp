class Solution {
public:
    bool checkDivisibility(int n) {
        int num=n;
        int total=0,prod=1,sum=0;
        while(n>0){
            int digit=n%10;
            sum+=digit;
            prod*=digit;
            n/=10;
        }
        total=prod+sum;
        if(num%total==0) return true;
        return false;
        
    }
};