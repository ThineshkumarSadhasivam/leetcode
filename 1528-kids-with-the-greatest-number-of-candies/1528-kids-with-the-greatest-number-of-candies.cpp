class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int e) {
        int n=candies.size();
        int max=0;
        vector<bool>ans;
        for(int i=0;i<n;i++){
            if(candies[i]>max)
                max=candies[i];
        }
        for(int i=0;i<n;i++){
            if((candies[i]+e)>=max){
                ans.push_back(true);
            }
            else
                ans.push_back(false);
        }
        return ans; 
    }
};