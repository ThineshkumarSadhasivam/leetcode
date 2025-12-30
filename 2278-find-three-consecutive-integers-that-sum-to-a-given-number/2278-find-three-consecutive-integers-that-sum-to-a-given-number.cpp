class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> res;
        if ((num - 3) % 3 != 0)
            return res;
        long long i = (num - 3) / 3;
        res.push_back(i);
        res.push_back(i + 1);
        res.push_back(i + 2);

        return res;
    }
};
