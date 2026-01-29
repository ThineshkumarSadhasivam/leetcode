class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>>res;
        sort(arr.begin(),arr.end());
        int mind=INT_MAX;
        for(int i=1;i<n;i++){
            mind=min(mind,arr[i]-arr[i-1]);
        }
        for(int i=1;i<n;i++){
            if(abs(arr[i-1]-arr[i])==mind)
                res.push_back({arr[i-1],arr[i]});
        }
        return res;
    }
};