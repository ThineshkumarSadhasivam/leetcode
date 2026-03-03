class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int freq[501]={0};
        int count=0;
        for(int x:nums){
            freq[x]++;
        }
        for(int x:nums){
            if(freq[x]%k==0 || freq[x]==0)
                count+=x;
        }
        return count;
    }
};