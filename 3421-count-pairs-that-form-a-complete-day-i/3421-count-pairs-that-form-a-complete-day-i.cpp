class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int count=0;
        for(int i=0;i<hours.size();i++){
            for(int j=0;j<i;j++){
                int x=hours[i]+hours[j];
                if(x%24==0)
                    count++;
            }
        }
        return count;
    }
};