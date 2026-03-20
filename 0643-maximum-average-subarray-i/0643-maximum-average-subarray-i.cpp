class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double total=0;
        for(int i=0;i<k;i++){
            total+=nums[i];
        }
        double mxtotal=total;
        for(int i=k;i<nums.size();i++){
            total+=nums[i];
            total-=nums[i-k];
            mxtotal=max(mxtotal,total);
        }
        return mxtotal/k;
    }
};