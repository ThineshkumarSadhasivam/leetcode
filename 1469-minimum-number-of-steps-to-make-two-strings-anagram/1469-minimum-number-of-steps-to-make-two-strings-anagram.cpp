class Solution {
public:
    int minSteps(string s, string t) {
        int count=0;
        std::unordered_map<char,int>freq;

        for(char x:s)
            freq[x]++;

        for(char y:t)
            freq[y]--;

        for(auto & p:freq){
            if(p.second>0)
                count+=p.second;
        }
        return count;

    }
};