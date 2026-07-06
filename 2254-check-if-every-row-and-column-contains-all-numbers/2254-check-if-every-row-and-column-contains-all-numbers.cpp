class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<unordered_set<int>> row(n),col(m);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int val=matrix[i][j];
                if(row[i].count(val) || col[j].count(val))
                    return false;

                row[i].insert(val);
                col[j].insert(val);
            }
        }
        return true;
    }
};