class Solution {
public:
    int getLeastFrequentDigit(int n) {
        int rev=0;
        int freq[11]={};
        vector<int>res;
        while(n>0){
            int digit=n%10;
            res.push_back(digit);
            n/=10;
        }
        for(int x:res){
            freq[x]++;
        }
        int min=INT_MAX;
        int result=-1;
        for(int i=0;i<10;i++){
            if(freq[i]>0 && freq[i]<min){
                min=freq[i];
                result=i;
            }
        }
        return result;
    }
};