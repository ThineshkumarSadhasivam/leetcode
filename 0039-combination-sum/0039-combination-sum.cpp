class Solution {
public:
    void f(int index,vector<vector<int>>& res,vector<int>& cur,vector<int>& candidates,int target){
        if(target==0){
            res.push_back(cur);
            return ;
        }
        
        if(index>=candidates.size()) return;

        if(candidates[index]<=target){
            cur.push_back(candidates[index]);
            f(index,res,cur,candidates,target-candidates[index]);
            cur.pop_back();
        }

        f(index+1,res,cur,candidates,target);

    }


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>cur;
        f(0,res,cur,candidates,target);
        return res; 
    }
};