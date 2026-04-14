class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // int n=nums.size();
        // if(n==0)
        //     return 0;
        // sort(nums.begin(),nums.end());
        // int count=1,largest=1;
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]==nums[i-1])
        //         continue;
        //     else if(nums[i]==nums[i-1]+1)
        //         count++;
        //     else
        //         count=1;
        //     largest=max(largest,count);
        // }
        // return largest;

        int n=nums.size();
        unordered_set<int>st(nums.begin(),nums.end());
        int largest=0;
        for(int x:st){
            if(st.find(x-1)==st.end()){
                int curr=x;
                int count=1;
                while(st.find(curr+1)!=st.end()){
                    curr++;
                    count++;
                }
                largest=max(largest,count);
            }
        }
        return largest;
    }
};