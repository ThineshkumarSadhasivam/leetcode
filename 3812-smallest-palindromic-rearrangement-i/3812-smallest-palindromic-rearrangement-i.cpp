#include<algorithm>
class Solution {
public:
    string smallestPalindrome(string s) {
        int freq[26]={0};
        string left="";
        string middle="";
        for(char ch:s){
            freq[ch-'a']++;
        }
        for(int i=0;i<26;i++){
            int time=freq[i]/2;
            while(time--)
                left+=(char)(i+'a');
        }
        for(int i=0;i<26;i++){
            if(freq[i]%2==1){
                middle+=(char)(i+'a');
                break;
            }
        }
        string right = left;
        reverse(right.begin(), right.end());
        return left+middle+right;
    }
};