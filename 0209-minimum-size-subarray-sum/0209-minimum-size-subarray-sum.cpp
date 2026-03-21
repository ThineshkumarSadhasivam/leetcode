class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int j=0;
        int sum=0,mn=INT_MAX;
        for(int i=0;i<nums.size();i++){
            while(j<nums.size() && sum<target){
                sum+=nums[j];
                j++;
            }
            if(sum>=target)
                mn=min(mn,j-i);
            sum-=nums[i];
        }
        if(mn==INT_MAX)
            return 0;
        return mn;
    }
};
