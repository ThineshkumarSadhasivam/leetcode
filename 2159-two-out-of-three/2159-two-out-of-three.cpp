class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int>res;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j])
                    res.push_back(nums1[i]);
            }
        }
        for(int x=0;x<nums2.size();x++){
            for(int y=0;y<nums3.size();y++){
                if(nums2[x]==nums3[y])
                    res.push_back(nums2[x]);
            }
        }
        for(int x=0;x<nums1.size();x++){
            for(int y=0;y<nums3.size();y++){
                if(nums1[x]==nums3[y])
                    res.push_back(nums1[x]);
            }
        }
        sort(res.begin(),res.end());
        res.erase(unique(res.begin(), res.end()), res.end());
        return res;
    }
};