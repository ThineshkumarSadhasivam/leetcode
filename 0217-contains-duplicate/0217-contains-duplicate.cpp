class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    //     int n=nums.size();
    //     sort(nums.begin(),nums.end());
    //     for(int i=1;i<n;i++){
    //         if(nums[i]==nums[i-1])
    //             return true;
    //     }
    //     return false;
    // }
    std::unordered_set<int>set1;
    for(int x:nums){
        if(set1.find(x)==set1.end())
            set1.insert(x);
        else
            return true;
    }
    return false;
    }

};