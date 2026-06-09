class Solution {
public:
    string getHint(string secret, string guess) {
        vector<int>map1(10,0);
        vector<int>map2(10,0);
        int bulls=0,cows=0;
        for(int i=0;i<secret.size();i++){
            int x=secret[i]-'0';
            int y=guess[i]-'0';
            if(x==y)
                bulls++;
            else{
                map1[x]++;
                map2[y]++;
            }
        }
        for(int i=0;i<10;i++){
            cows+=min(map1[i],map2[i]);
        }
        return to_string(bulls) + "A" + to_string(cows) + "B";   
    }
};