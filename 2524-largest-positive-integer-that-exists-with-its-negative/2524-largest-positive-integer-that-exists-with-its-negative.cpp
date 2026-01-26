class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int ans=-1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums[i]==-nums[j])
                    ans=max(ans,abs(nums[i]));
            }
        }
        return ans;
    }
};