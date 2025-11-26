class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n=order.size();
        int m=friends.size();
        vector<int>res;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(order[i]==friends[j])
                    res.push_back(friends[j]);
            }
        }
        return res;
    }
};