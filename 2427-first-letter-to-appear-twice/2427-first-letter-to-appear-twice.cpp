class Solution {
public:
    char repeatedCharacter(string s) {
        // std::unordered_set<char>seen;
        // for(char c:s){
        //     if(seen.find(c)==seen.end())
        //         seen.insert(c);
        //     else
        //         return c;
        // }
        // return 0;

        std::unordered_set<char>seen;
        for(char c:s){
            if(seen.count(c))
                return c;
            else
                seen.insert(c);
        }
        return 0;
    }
};