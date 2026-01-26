class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int i=low;i<=high;i++){
            if(i>=10 && i<=99){
                int first=i%10;
                int last=i/10;
                if(first==last)
                    count++;
            }
            if(i>=1000 && i<=9999){
                int x = i;
                int d=x%10;x/=10;
                int c=x%10;x/=10;
                int b=x%10;x/=10;
                int a=x%10;
                if((a+b)==(c+d))
                    count++;
            }
        }
        return count;
    }
};