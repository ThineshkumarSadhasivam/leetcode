class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int>res;
        sort(nums.begin(),nums.end());
        int n=queries.size();
        int m=nums.size();
        for(int i=0;i<n;i++){
            int count=0,sum=0;
            for(int j=0;j<m;j++){
                sum+=nums[j];
                if(sum<=queries[i])                   
                    count++;
            }
            res.push_back(count);
        }
        return res;
    }
};