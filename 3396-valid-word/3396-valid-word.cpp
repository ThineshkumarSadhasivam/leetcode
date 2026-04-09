class Solution {
public:
    bool isValid(string word) {
        int vow_count=0;
        int cons_count=0;
        if(word.length()<3)
            return false;
        for(char c:word){
            if(!isalnum(c))
                return false;
            if(isalpha(c)){
                 char ch=tolower(c);
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                    vow_count++;
                else 
                    cons_count++;
            }
        }
        return (cons_count >0 && vow_count >0);
    }
};