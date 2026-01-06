class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end());
        int total = 0; 
        int result = 0; 
        int n=satisfaction.size();
        for (int i = n- 1; i >= 0; i--) {
            total += satisfaction[i];
            if (total <= 0) break;
            result += total;
        }
        return result;
    }
};
