class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        std::unordered_set<int>st(arr.begin(),arr.end());
        int zero=0;
        for(int x:arr){ 
            if(x==0)
                zero++;
        }
        if(zero>1) return true;
        for(int x:arr){
            if(x!=0 && st.find(2*x)!=st.end())
                return true;
        }
        return false;
    }
};