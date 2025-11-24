class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>res;
        int n=nums.size();
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());
        for(int i=mn;i<=mx;i++){
            bool ans=false;
            for(int j=0;j<n;j++){
                if(nums[j]==i){
                    ans=true;
                    break;
                }
            }
                if(!ans){
                    res.push_back(i);
                }
        }
        return res;
    }
};