class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total=0,pos=-1;
        int left=0,right=0;
        for(int x:nums){
            total+=x;
        }
        for(int i=0;i<nums.size();i++){
            right=total-left-nums[i];
            if(right==left)
                return i;
            left+=nums[i];
        }
        return pos;
    }
};