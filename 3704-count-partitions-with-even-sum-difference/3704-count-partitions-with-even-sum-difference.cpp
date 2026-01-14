class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        long long  sum=0;
        for(int x:nums){
            sum+=x;
        }
        int count=0;
        long long left=0,right=0;
        for(int i=0;i<n-1;i++){
            left+=nums[i];
            right=sum-left;
            long long x=llabs(left-right);
            if(x%2==0)
                count++;
        }
        return count;
    }
};