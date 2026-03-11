class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
            return 1;
        std::string binary="";
        while(n>0){
            binary=std::to_string(n%2)+binary;
            n/=2;
        }
        for(char & c:binary){
            if(c=='0')
                c='1';
            else
                c='0';
        }
        return stoi(binary,nullptr,2);
    }
};