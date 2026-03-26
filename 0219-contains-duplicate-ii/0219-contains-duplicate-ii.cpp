class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        std::unordered_set<int>set1;
        int i=0;
        for(int x:nums){
            if(set1.find(x)!=set1.end())
                return true;
            set1.insert(x);
            if(i>=k)
                set1.erase(nums[i-k]);
            i++;
        }
        return false;
    }
};