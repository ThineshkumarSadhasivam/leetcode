class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        int n=nums.size();
        int max=0,min=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<k;i++){
            max+=nums[i];
        }
        for(int i=n-k;i<n;i++){
            min+=nums[i];
        }
        return abs(max-min);
    }
};