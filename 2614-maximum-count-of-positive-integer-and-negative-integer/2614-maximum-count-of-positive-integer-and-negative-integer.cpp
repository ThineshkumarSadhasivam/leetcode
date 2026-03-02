class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int count=0,pos=0,neg=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)
                pos++;
            else if(nums[i]<0)
                neg++;
        }
        count=max(pos,neg);
        return count;
    }
};