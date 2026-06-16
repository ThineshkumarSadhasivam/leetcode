class Solution {
public:
    void f(int index, int n, int k, vector<vector<int>>& res,vector<int>& cur) {
        if (k == 0) {
            res.push_back(cur);
            return;
        }
        for (int i = index; i <= n; i++) {
            if (i > n || k <= 0)
                break;
            cur.push_back(i);
            f(i + 1, n , k - 1, res,cur);
            cur.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int>cur;
        f(1, n, k, res,cur);
        return res;
    }
};