class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        // vector<int>res;
        // int n=nums.size();
        // int mn = *min_element(nums.begin(), nums.end());
        // int mx = *max_element(nums.begin(), nums.end());
        // for(int i=mn;i<=mx;i++){
        //     bool ans=false;
        //     //for(int num:nums){
        //     for(int j=0;j<n;j++){
        //         //if(num==i){
        //         if(nums[j]==i){
        //             ans=true;
        //             break;
        //         }
        //     }
        //         if(!ans){
        //             res.push_back(i);
        //         }
        // }
        // return res;
        
        int n = nums.size();
        vector<int> res;
        int mx = *max_element(nums.begin(), nums.end());
        int mn = *min_element(nums.begin(), nums.end());
        vector<int> freq(mx + 1, 0);
        for(int x : nums){
            freq[x]++;
        }

        for(int i = mn; i <= mx; i++){
            if(freq[i] == 0)
                res.push_back(i);
        }

        return res;
    }
};