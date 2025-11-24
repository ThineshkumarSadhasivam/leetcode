class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>res;
        for(int i=0;i<n;i++){
            res.push_back(nums[i+1]);
            res.push_back(nums[i]);
            i++;
        }
        return res;
    }
};