class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        bool ans=false;
        int n=nums.size();
        int small=0,big=0;
        for(int i=0;i<n;i++){
            if(nums[i]<10)
                small+=nums[i];
            else if(nums[i]>=10)
                big+=nums[i];
        }
        if(small>big)
            ans=true;
        if(big>small)
            ans=true;
        return ans;
    }
};