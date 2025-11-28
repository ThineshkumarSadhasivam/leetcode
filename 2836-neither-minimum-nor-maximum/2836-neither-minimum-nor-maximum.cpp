class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        //int n=nums.size();
        //int m=-1;
        //vector<int>res;
        //int min = *min_element(nums.begin(), nums.end());
        //int max=  *max_element(nums.begin(), nums.end());
        //for(int i=0;i<n;i++){
            //if(nums[i]!=min && nums[i]!=max)
                //res.push_back(nums[i]);
        //}
        //int k=res.size();
        //for(int i=0;i<k;i++){
            //m=res[i];
            //break;
        //}
        //return m;
        int n=nums.size();
        if(n<3)
            return -1;
        int min=*min_element(nums.begin(),nums.end());
        int max=*max_element(nums.begin(),nums.end());
        for(int i:nums){
            if(i!=min && i!=max)
                return i;
        }
        return -1;
    }
};
