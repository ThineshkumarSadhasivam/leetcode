class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end(),greater<int>());
        int max=nums[0],smax=nums[1],min=nums[n-1];
        return (max+smax-(min));
    }
};