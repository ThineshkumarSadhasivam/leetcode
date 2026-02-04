class Solution {
public:
    int alternateDigitSum(int n) {
        int possum=0,negsum=0,i=0,rev=0;
        while(n>0){
            rev=rev*10+(n%10);
            n/=10;
        }
        while(rev>0){
            int digit=rev%10;
            if(i%2==0)
                possum+=digit;
            else if(i%2!=0)
                possum-=digit;
            i++;
            rev/=10;
        }
        return possum;
    }
};