class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        double avg;
        vector<double>res;
        for(int i=0;i<n/2;i++){
            double avg = (nums[i] + nums[n - 1 - i]) / 2.0;
            res.push_back(avg);
        }
        sort(res.begin(),res.end());
        return res[0];
    }
};