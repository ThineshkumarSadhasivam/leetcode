class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
    int count=0;
    int m=nums1.size(),n=nums2.size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int con=nums2[j]*k;
            if(nums1[i]%con==0)
                count++;
            }
        }
        return count;
    }
};