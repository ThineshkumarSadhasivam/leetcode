class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=0)
                count++;
        }
        return count;
    }
};