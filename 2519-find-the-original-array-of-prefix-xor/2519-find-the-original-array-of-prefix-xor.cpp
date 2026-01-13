class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>res;
        res.push_back(pref[0]);
        for(int i=1;i<pref.size();i++){
            int k=pref[i]^ pref[i-1];
            res.push_back(k);
        }
        return res;
    }
};