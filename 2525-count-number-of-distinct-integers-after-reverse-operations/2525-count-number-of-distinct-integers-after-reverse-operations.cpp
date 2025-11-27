class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        vector<int>res;
        for(int i=0;i<n;i++){
            res.push_back(nums[i]);
        }
        for(int i=0;i<n;i++){
            int temp=nums[i];
            int rev=0;
            while (temp > 0) {
                rev = rev * 10 + (temp % 10); 
                temp /= 10; 
            }
            res.push_back(rev);
        }
        sort(res.begin(),res.end());
        for(int i=1;i<res.size();i++){
            if(res[i]!=res[i-1])
                count++;
        }
        return count+1;
    }
};