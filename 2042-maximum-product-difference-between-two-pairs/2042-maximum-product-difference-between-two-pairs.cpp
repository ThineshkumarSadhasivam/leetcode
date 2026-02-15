class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int n=nums.size();
        int a=nums[0],b=nums[1],c=nums[n-2],d=nums[n-1];
        return (a*b)-(c*d);
    }
};