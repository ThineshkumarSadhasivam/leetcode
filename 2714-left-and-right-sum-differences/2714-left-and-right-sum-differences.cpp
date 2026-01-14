class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>left;
        vector<int>right;
        int n=nums.size();
        left.push_back(0);
        int sum=0;
        for(int i=1;i<n;i++){
            sum+=nums[i-1];
            left.push_back(sum);
        }
        int total=0;
        for(int i=n-2;i>=0;i--){
            total+=nums[i+1];
            right.push_back(total);
        }
        reverse(right.begin(),right.end());
        right.push_back(0);
        vector<int>res;
        for(int i=0;i<n;i++){
            int x=abs(left[i]-right[i]);
            res.push_back(x);
        }
        return res;
    }
};