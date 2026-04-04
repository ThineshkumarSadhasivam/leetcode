class Solution {
public:
    bool isHappy(int n) {
        if(n==1 || n==7)
            return true;
        else if(n<10)
            return false;
        else{
            int sum=0;
            int temp=n;
            while(temp>0){
                int digit=temp%10;
                sum+=digit*digit;
                temp/=10;
            }
            return isHappy(sum);
        }
    }
};