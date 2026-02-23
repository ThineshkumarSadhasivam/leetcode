class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int k=n/2,count=0;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                count++;
                i++;
            }
        }
        if(count==k)
            return true;
        return false;
    }
};