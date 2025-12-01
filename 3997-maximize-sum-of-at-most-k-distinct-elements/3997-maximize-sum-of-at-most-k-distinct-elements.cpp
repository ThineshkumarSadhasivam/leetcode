class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>res;
        sort(nums.begin(),nums.end(),greater<int>());
        res.push_back(nums[0]);
        for(int i=1;i<n && res.size()<k ;i++){
            if(nums[i]!=nums[i-1]){
                res.push_back(nums[i]);
                int m=res.size();
            }
        }
        return res;
    }
};