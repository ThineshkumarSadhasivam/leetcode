class Solution {
public:
    void f(int index,vector<int>& nums,vector<vector<int>>& res,vector<int>& cur){
        if(index==nums.size()){
            res.push_back(cur);
            return;
        }
        cur.push_back(nums[index]);
        f(index+1,nums,res,cur);
        cur.pop_back();
        f(index+1,nums,res,cur);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>cur;
        f(0,nums,res,cur);
        return res;
    }
};
//     void f(int index,vector<int>& nums,vector<vector<int>>& res,vector<int>& cur){
//         if(index==nums.size()){
//             res.push_back(cur);
//             return;
//         }
//         f(index+1,nums,res,cur);
//         cur.push_back(nums[index]);
//         f(index+1,nums,res,cur);
//         cur.pop_back();
//     }
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>>res;
//         vector<int>cur;
//         f(0,nums,res,cur);
//         return res;
//     }
// };