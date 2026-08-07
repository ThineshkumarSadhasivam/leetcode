class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // int count=0;
        // for(int n:nums){
        //     count^=n;
        // }
        // return count;
        std::unordered_map<int,int>freq;
        for(int x:nums)
            freq[x]++;
        for(auto x:freq){
            if(x.second==1)
                return x.first;
        }
        return -1;
    }
};