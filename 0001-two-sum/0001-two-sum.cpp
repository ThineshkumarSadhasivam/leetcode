class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size();
        vector<pair<int, int>> nums(n);
    //     for(int i=0;i<n;i++){
    //         for(int j=i+1;j<n;j++){
    //             if(nums[i]+nums[j]==target){
    //                 arr.push_back(i); 
    //                 arr.push_back(j); 
    //                 break;
    //             }
    //         }
    //     }
    // return arr;
        // for(int i=0;i<n;i++){
        //     nums[i]={arr[i],i};
        // }
        // sort(nums.begin(),nums.end());
        // int left=0,right=n-1;
        // while(left<right){
        //     int sum=nums[left].first+nums[right].first;
        //     if(sum==target)
        //         return {nums[left].second, nums[right].second};
        //     else if(sum>target)
        //         right--;
        //     else
        //         left++;
        // }
        // return {};

        std::unordered_map<int,int>seen;
        
        for(int i=0;i<n;i++){
            int rem=target-arr[i];

        if(seen.count(rem))
            return{seen[rem],i};
        
        seen[arr[i]]=i;
        }
        return {};
    
    }
};