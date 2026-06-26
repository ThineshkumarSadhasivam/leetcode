class Solution {
public:
    void f(int index, vector<int>& nums, vector<vector<int>>& res) {
        if (index == nums.size()) {
            res.push_back(nums);
            return;
        }
        std::unordered_set<int> already;
        for (int i = index; i < nums.size(); i++) {
            if (already.count(nums[i]))
                continue;
            already.insert(nums[i]);

            swap(nums[index], nums[i]);
            f(index + 1, nums, res);
            swap(nums[index], nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        f(0, nums, res);
        return res;
    }
};