class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n=nums.size();
        int m=0;
        vector<int>res;
        int min = *min_element(nums.begin(), nums.end());
        int max=  *max_element(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]!=min && nums[i]!=max)
                res.push_back(nums[i]);
        }
        int k=res.size();
        if(k==0)
            m=-1;
        for(int i=0;i<k;i++){
            m=res[i];
            break;
        }
        return m;
    }
};