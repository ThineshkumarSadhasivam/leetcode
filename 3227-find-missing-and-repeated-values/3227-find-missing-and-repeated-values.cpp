class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int total=n*n;
        vector<int>res;
        vector<int>freq(total+1);
        for(vector<int> x:grid){
            for(int y:x){
                freq[y]++;
            }
        }
        int repeated=-1,missing=-1;
        for(int i=1;i<=total;i++){
            if(freq[i]==2)
                repeated=i;
            else if(freq[i]==0)
                missing=i;
        }
        res.push_back(repeated);
        res.push_back(missing);
        return res;
    }
};