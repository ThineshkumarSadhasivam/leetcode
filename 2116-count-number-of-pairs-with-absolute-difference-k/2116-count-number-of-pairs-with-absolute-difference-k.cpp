class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(abs(nums[i]-nums[j])==k)
                    count++;
            }
        }
        return count;
    }
};