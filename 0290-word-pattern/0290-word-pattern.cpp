class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>words;
        string temp;

        for(char x:s){
            if(x==' '){
                words.push_back(temp);
                temp="";
            }
            else
                temp+=x;
        }
        words.push_back(temp);

        if(pattern.size()!=words.size())
            return false;

        std::unordered_map<char,string>m1;
        std::unordered_map<string,char>m2;


        for(int i=0;i<pattern.size();i++){
            char a=pattern[i];
            string b=words[i];

            if(m1.count(a) && m1[a]!=b)
                return false;

            else if(m2.count(b) && m2[b]!=a)
                return false;

            m1[a]=b;
            m2[b]=a;
        }
        return true;
    }
};