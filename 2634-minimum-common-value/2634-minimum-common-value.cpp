class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        std:unordered_set<int>set1;
        int mn=INT_MAX;
        set1.insert(nums1.begin(),nums1.end());

        for(int x:nums2){
            if(set1.find(x)!=set1.end())
                mn=min(mn,x);
        }
        if(mn==INT_MAX)
            return -1;
        return mn;
    }
};