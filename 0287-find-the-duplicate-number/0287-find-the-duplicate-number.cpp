class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int dup=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1])
                dup=nums[i];
        }
        return dup;
    }
};