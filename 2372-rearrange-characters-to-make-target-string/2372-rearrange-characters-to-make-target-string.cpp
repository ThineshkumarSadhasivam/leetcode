class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        int sfreq[26]={0};
        int tfreq[26]={0};
        int ans=INT_MAX;
        for(char c:s)
            sfreq[c-'a']++;
        for(char c:target)
            tfreq[c-'a']++;
        for(char ch:target)
            ans=min(ans,sfreq[ch-'a']/tfreq[ch-'a']);
        return ans;
    }
};