class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n=details.size();
        int count=0;
        for(int i=0;i<n;i++){
            string x=details[i];
            string res=x.substr(11,2);
            int y=stoi(res);
            if(y>60)
                count++;
        }
        return count;
    }
};