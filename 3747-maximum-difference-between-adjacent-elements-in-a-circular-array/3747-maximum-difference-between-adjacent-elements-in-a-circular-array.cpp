class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int mx=0;
        int n=nums.size();
        for(int i=1;i<n;i++){
            int x=nums[i];
            int temp=abs(nums[i]-nums[i-1]);
            mx=max(mx,temp);
        }
        int k=abs(nums[0]-nums[n-1]);
        if(k>mx)
            return k;
        return mx;
    }
};