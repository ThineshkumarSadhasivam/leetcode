class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int count=0;
        int n=baskets.size();
        for(int x:fruits){
            for(int j=0;j<baskets.size();j++){
                if(baskets[j]>=x){
                    baskets[j]=-1;
                    count++;
                    break;
                }
            }
        }
        return n-count;
    }
};