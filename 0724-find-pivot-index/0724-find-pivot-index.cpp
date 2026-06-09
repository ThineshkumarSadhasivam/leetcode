class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        // int total=0;
        // for(int x:nums){
        //     total+=x;
        // }
        // int left=0;
        // for(int i=0;i<nums.size();i++){
        //     int right=total-left-nums[i];
        //     if(left==right)
        //         return i;
        //     left+=nums[i];
        // }
        // return -1;

        vector<int>prefixsum(nums.size());
        prefixsum[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefixsum[i]=prefixsum[i-1]+nums[i];
        }
        int n=nums.size();
        int left;
        for(int i=0;i<nums.size();i++){
            if(i==0)
                left=0;
            else
                left=prefixsum[i-1];
            
            int right=prefixsum[n-1]-prefixsum[i];
            if(left==right)
                return i;
        }
        return -1;
    }

};