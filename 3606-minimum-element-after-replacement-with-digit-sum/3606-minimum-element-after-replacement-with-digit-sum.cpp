class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        for(int i=0;i<n;i++){
            int rev=0;
            while(nums[i]>0){
                rev+=nums[i]%10;
                nums[i]/=10;
            }
            res.push_back(rev);
        }
        //int min=res[0];
        //for(int i=0;i<n;i++){
            //if(res[i]<min)
                //min=res[i];
        //}
        //return min;
        int mn = *min_element(res.begin(), res.end());
        return mn;
    }
};