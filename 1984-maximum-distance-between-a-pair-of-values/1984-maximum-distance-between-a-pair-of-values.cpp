class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        // int mx=0;
        // for(int i=0;i<nums1.size();i++){
        //     for(int j=i;j<nums2.size();j++){
        //         if(i<=j && nums1[i]<=nums2[j]){
        //             int diff=j-i;
        //             mx=max(mx,diff);
        //         }
        //     }
        // }
        // return mx;

        int i=0,j=0,mx=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<=nums2[j]){
                int diff=j-i;
                mx=max(mx,diff);
                j++;
            }
            else{
                i++;
            }
        }
        return mx;
    }
};