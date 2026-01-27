class Solution {
public:
    bool isSameAfterReversals(int num) {
        int rem=0;
        int temp=num;
        while(num>0){
            int digit=num%10;
            rem=rem*10+digit;
            num/=10;
        }
        int srem=0;
        while(rem>0){
            int digit=rem%10;
            srem=srem*10+digit;
            rem/=10;
        }
        if(srem==temp)
            return true;
        return false;
    }
};