class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int order=0;
        for(int i=left;i<=right;i++){
            int count=0;
            int x=i;
            while(x>0){
                if(x%2==1)
                    count++;
                x/=2;
            }
            int prime=0;
            for(int j=1;j<=count;j++){
                if(count%j==0)
                    prime++;
            }
            if(prime==2)
                order+=1;
        }
        return order;
    }
};