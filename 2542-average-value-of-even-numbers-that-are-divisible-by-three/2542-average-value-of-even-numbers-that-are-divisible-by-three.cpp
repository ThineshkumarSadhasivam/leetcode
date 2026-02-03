class Solution {
public:
    int averageValue(vector<int>& nums) {
        int n=nums.size(),total=0,num=0;
        for(int i=0;i<n;i++){
            if((nums[i]%2==0) && (nums[i]%3==0)){
                total+=nums[i];
                num+=1;
            }
        }
        if(num==0)
            return 0;
        else
            return total/num;
    }
};