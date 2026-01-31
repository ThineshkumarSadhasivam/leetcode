class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        int n=nums1.size(),m=nums2.size();
            sort(nums1.begin(),nums1.end());
            sort(nums2.begin(),nums2.end());
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j])
                    res.push_back(nums1[i]);
            }
        }
       res.erase(unique(res.begin(), res.end()), res.end());
       return res;
    }
};