class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    //     vector<int>res;
    //     int n=nums1.size(),m=nums2.size();
    //         sort(nums1.begin(),nums1.end());
    //         sort(nums2.begin(),nums2.end());
    //     for(int i=0;i<nums1.size();i++){
    //         for(int j=0;j<nums2.size();j++){
    //             if(nums1[i]==nums2[j])
    //                 res.push_back(nums1[i]);
    //         }
    //     }
    //    res.erase(unique(res.begin(), res.end()), res.end());
    //    return res;
    // }
    
    vector<int>res;
    std::unordered_set<int>num1; // Defining an unordered set
    num1.insert(nums1.begin(),nums1.end());
    for(int x:nums2){
        if(num1.find(x)!=num1.end()){  // Find () Keyword
            res.push_back(x);
            num1.erase(x);  // It removes the element if its exist in set
        } 
    }
    return res;
    }
};