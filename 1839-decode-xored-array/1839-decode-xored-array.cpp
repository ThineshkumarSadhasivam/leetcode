class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>res;
        int n=encoded.size();
        res.push_back(first);
        for(int i=0;i<n;i++){
            int x=res[i]^encoded[i];
            res.push_back(x);
        }
        return res;
    }
};