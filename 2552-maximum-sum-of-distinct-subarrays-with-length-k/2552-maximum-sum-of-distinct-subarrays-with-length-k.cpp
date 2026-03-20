class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int mx=*max_element(nums.begin(),nums.end());
        vector<int>freq(mx+1,0);
        long long total=0,mxtotal=0;
        int distinct=0;
        for(int i=0;i<k;i++){
            total+=nums[i];
            if(freq[nums[i]]==0)
                distinct++;
            freq[nums[i]]++;
        }

        if(distinct==k)
            mxtotal=total;

        for(int i=k;i<nums.size();i++){
            total+=nums[i];
            if(freq[nums[i]]==0)
                distinct++;
            freq[nums[i]]++;

            freq[nums[i-k]]--;
            if(freq[nums[i-k]]==0) distinct--;
            total-=nums[i-k];

            if(distinct==k)
                mxtotal=max(mxtotal,total);
        }
        return mxtotal;
    }
};