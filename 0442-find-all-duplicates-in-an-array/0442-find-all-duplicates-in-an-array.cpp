class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    //     int n=nums.size();
    //     vector<int> freq(n + 1, 0);
    //     vector<int>ans;
    //     for(int x:nums){
    //         freq[x]++;
    //         if(freq[x]>1)
    //             ans.push_back(x);
    //     }
    //     return ans;
    // }

    std::unordered_map<int,int>mp;
    vector<int>res;

    for(int x:nums){
        mp[x]++;
        if(mp[x]>1)
            res.push_back(x);
    }
    return res;
    }
};