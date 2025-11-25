class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n=heights.size();
        int count=0;
        vector<int> res(n);
        for(int i=0;i<n;i++){
            res[i]=heights[i];
        }
        sort(res.begin(),res.end());
        for(int i=0;i<n;i++){
            if(heights[i]!=res[i])
                count++;
        }
        return count;
    }
};