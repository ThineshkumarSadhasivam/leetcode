class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        sort(piles.begin(),piles.end());
        int alice=piles[n-1],bob=piles[n-2];
        for(int i=0;i<n-2;i++){
            if(piles[i]>piles[i+1]){
                alice+=piles[i];
                bob+=piles[i+1];
            }
            else{
                alice+=piles[i+1];
                bob+=piles[i];
            }
        }
        if(alice>bob)
            return true;
        return false;      
    }
};