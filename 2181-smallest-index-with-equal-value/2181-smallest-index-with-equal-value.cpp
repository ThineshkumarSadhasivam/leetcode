class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int mn=nums[0];
        bool res=false;
        for(int i=0;i<nums.size();i++){
            int k=i%10;
            if(k==nums[i]){
                return i;
            }
        }
        return -1;
    }
};