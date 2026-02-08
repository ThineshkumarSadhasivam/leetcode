class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>res;
        int x=0;
        res.push_back(0);
        for(int i=0;i<gain.size();i++){
            x+=gain[i];
            res.push_back(x);
        }
        int mx=*max_element(res.begin(),res.end());
        return mx;
    }
};