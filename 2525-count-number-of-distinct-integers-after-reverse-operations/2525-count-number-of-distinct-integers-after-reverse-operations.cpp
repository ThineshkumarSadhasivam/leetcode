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
            int rev=0;
            while (nums[i] > 0) {
                rev = rev * 10 + (nums[i] % 10); 
                nums[i] /= 10; 
            }
            res.push_back(rev);
        }
        sort(res.begin(),res.end());
        for(int i=0;i<res.size()-1;i++){
            if(res[i]!=res[i+1])
                count++;
        }
        return count+1;
    }
};