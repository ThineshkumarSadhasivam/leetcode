class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>res;
        for(int i=0;i<n;i++){
            res.push_back(nums1[i]);
        }
        for(int i=0;i<m;i++){
            res.push_back(nums2[i]);
        }
        sort(res.begin(),res.end());
        int x=res.size();
        if(x%2==1)
            return res[x/2];
        else
            return (res[x / 2 - 1] + res[x / 2]) / 2.0;
    }
};