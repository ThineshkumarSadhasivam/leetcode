class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int n=tasks.size();
        int m=tasks[0].size();
        vector<int>res;
        //int res=INT_MAX;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<m;j++){
                sum+=tasks[i][j];
            }
            //res=min(sum,res);
            res.push_back(sum);
        }
        sort(res.begin(),res.end());
        return res[0];
    }
};