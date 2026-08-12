class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // int j=nums.size()-1;
        // k=k%n;
        // int y=0;
        // while(k!=0){
        //     int x=nums[j];
        //     for(int i=nums.size()-2;i>=0;i--){
        //         nums[i+1]=nums[i];
        //     }
        //     nums[y]=x;
        //     k--;
        // }
        int n=nums.size();
        k=k%n;
        vector<int>temp(n);
        for(int i=0;i<n;i++)
            temp[(i+k)%n]=nums[i];

        nums=temp;
    }
};