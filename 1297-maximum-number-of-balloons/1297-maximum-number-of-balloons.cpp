class Solution {
public:
    int maxNumberOfBalloons(string text) {
        // int b=0,a=0,l=0,o=0,n=0;
        // for(char &c:text){
        //     if(c=='b') b++;
        //     else if(c=='a') a++;
        //     else if(c=='l') l++;
        //     else if(c=='o') o++;
        //     else if(c=='n') n++;
        // }
        // return min({b,a,l/2,o/2,n});

        int freq[26]={0};
        for(char c:text){
            freq[c-'a']++;
        }
        return min(
            {freq['b'-'a'],freq['a'-'a'],freq['l'-'a']/2,freq['o'-'a']/2,freq['n'-'a']    
        });
    }
};