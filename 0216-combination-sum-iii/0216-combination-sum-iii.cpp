class Solution {
public:
    void f(int index,int k,int n,vector<vector<int>>&res,vector<int>&cur){
        if(n==0 && k==0){
            res.push_back(cur);
            return;
        }

        for(int i=index;i<=9;i++){
            if(i>n || k<=0)
                break;
            cur.push_back(i);
            f(i+1,k-1,n-i,res,cur);
            cur.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>res;
        vector<int>cur;
        f(1,k,n,res,cur);
        return res;
    }
};