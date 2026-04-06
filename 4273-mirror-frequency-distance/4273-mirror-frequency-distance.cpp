class Solution {
public:
    int mirrorFrequency(string s) {
        vector<int> freq(128, 0);

        for (char c : s) {
            freq[c]++;
        }

        int count = 0;

        for (char c = 'a'; c <= 'm'; c++) {
            char m = 'a' + ('z' - c);
            count += abs(freq[c] - freq[m]);
        }

        for (char c = '0'; c <= '4'; c++) {
            char m = '0' + ('9' - c);
            count += abs(freq[c] - freq[m]);
        }

        return count;

        // std::unordered_map<char,int>freq;
        // int count=0;

        // for(char c:s)
        //     freq[c]++;
        
        // for(char c='a';c<='m';c++){
        //     char m='a'+('z'-c);
        //     count+=abs(freq[c]-freq[m]);
        // }

        // for(char c='0';c<='4';c++){
        //     char m='0'+('9'-c);
        //     count+=abs(freq[c]-freq[m]);
        // }
        // return count;

    }
};