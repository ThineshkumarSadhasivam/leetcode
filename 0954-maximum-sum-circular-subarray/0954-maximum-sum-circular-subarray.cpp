class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int curmax=0,curmin=0;
        int summax=nums[0],summin=nums[0];
        int sum=0;
        for(int x:nums){
            curmax=max(x,curmax+x);
            summax=max(curmax,summax);

            curmin=min(x,curmin+x);
            summin=min(curmin,summin);

            sum+=x;

        }
        if(summax<0)
            return summax;

        return max(summax,sum-summin);
    }
};