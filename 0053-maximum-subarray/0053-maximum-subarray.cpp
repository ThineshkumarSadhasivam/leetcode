class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int sum=INT_MIN;
        // for(int i=0;i<nums.size();i++){
        //     int cursum=0;
        //     for(int j=i;j<nums.size();j++){
        //         cursum+=nums[j];
        //         if(cursum>sum)
        //             sum=cursum;
        //     }
        // }
        // return sum;
        int sum=INT_MIN;
        int cursum=0;
        for(int x:nums){
            cursum+=x;
            if(cursum>sum)
                sum=cursum;
            if(cursum<0)
                cursum=0;
        }
        return sum;
    }
};