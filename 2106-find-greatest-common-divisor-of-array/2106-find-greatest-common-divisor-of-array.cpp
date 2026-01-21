class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max=*max_element(nums.begin(),nums.end());
        int min=*min_element(nums.begin(),nums.end());
        int count=0;
        vector<int>res;
        for(int i=1;i<=min;i++){
            if((max%i==0) && (min%i==0))
                res.push_back(i);
        }
        int m=*max_element(res.begin(),res.end());
        return m;
    }
};