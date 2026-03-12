class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        int n=nums.size();
        int mx=*max_element(nums.begin(),nums.end());
        vector<int>freq(mx+1,0);
        for(int x:nums){
            freq[x]++;
        }
        for(int x:nums){
            int f=freq[x];
            if(f<=1)
                continue;
            int prime=0;
            for(int j=1;j*j<=f;j++){
                if(f%j==0){
                    if(j*j==f)
                        prime++;
                    else
                        prime+=2;
                }
            }
            if(prime==2)
                return true;
            }         
        return false;
    }
};