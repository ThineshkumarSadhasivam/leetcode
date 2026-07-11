class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long long windowsum=0;
        int res=0;
        int left=0;
        for(int right=0;right<nums.size();right++){
            windowsum+=nums[right];
            while((long long)nums[right]*(right-left+1)-windowsum > k){
                windowsum-=nums[left];
                left++;
            }
            res=max(res,right-left+1);
        }
        return res;
    }
};