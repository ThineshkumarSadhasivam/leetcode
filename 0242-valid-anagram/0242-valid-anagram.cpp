class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char,int>freq;
        for(char x:s)
            freq[x]++;
            
        for(char y:t)
            freq[y]--;

        for(auto & p:freq)
            if(p.second!=0)
                return false;

        return true;
    }
};