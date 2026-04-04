class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        std::unordered_map<int,int>freq;
        vector<int>res;

        for(int x:nums)
            freq[x]++;

        for(auto x:freq){
            if(x.second==1)
                res.push_back(x.first);
        }
        return res;
    }
};