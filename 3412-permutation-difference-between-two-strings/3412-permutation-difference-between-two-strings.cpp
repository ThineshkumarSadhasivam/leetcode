class Solution {
public:
    int findPermutationDifference(string s, string t) {
        // int sum=0;
        // for(int i=0;i<s.size();i++){
        //     for(int j=0;j<t.size();j++){
        //         if(s[i]==t[j])
        //             sum+=abs(i-j);
        //     }
        // } 
        // return sum;

        int sum=0;
        std::unordered_map<char,int>mp;

        for(int i=0;i<t.size();i++){
            mp[t[i]]=i;
        }

        for(int i=0;i<s.size();i++){
            sum+=abs(i-mp[s[i]]);
        }

        return sum;
    }
};