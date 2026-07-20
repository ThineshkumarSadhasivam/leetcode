class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mx=*max_element(nums.begin(),nums.end());
        int mn=*min_element(nums.begin(),nums.end());
        int count=0;
        vector<int>res;
        for(int i=1;i<=mn;i++){
            if((mx%i==0) && (mn%i==0))
                count=max(count,i);
        }
        return count;
    }
};