class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int n=nums.size();
        int total=0;
        sort(nums.begin(),nums.end(),greater<int>());
        int sum=nums[0];
        for(int i=0;i<k;i++){
            total+=sum;
            sum=sum+1;
        }
        return total;
    }
};