class Solution {
public:
    void f(int index,vector<int>& nums,vector<vector<int>>& res,vector<int>& cur){
        res.push_back(cur);
        for(int i=index;i<nums.size();i++){
            if(i>index && nums[i]==nums[i-1])
                continue;
            cur.push_back(nums[i]);
            f(i+1,nums,res,cur);
            cur.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>cur;
        sort(nums.begin(),nums.end());
        f(0,nums,res,cur);
        return res;
    }
};