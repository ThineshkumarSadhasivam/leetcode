class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int mx=*max_element(nums.begin(),nums.end());
        vector<int>freq(mx+1,0);
        for(int x:nums){
            freq[x]++;
        }
        int result=-1;
        int mn=0;
        for(int i=0;i<=mx;i++){
            if(i%2==0 && freq[i]>0){
                if(freq[i]>mn){
                    mn=freq[i];
                    result=i;
                }
            }
        }
        return result;
    }
};