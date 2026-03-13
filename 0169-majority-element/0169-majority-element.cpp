class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int mx=*max_element(nums.begin(),nums.end());
        // vector<int>freq(mx+1,0);
        // for(int x:nums){
        //     freq[x]++;
        // }
        // int maxfreq=0;
        // int result=-1;
        // for(int i=0;i<=mx;i++){
        //     if(freq[i]>=maxfreq){
        //         maxfreq=freq[i];
        //         result=i;
        //     }
        // }
        // return result;


        // The above one is actually works for positive number only

        // we have neagtive number also so we went Boyer-Moore Voting Algorithm

        int candidate=0;
        int count=0;
        for(int x:nums){
            if(count==0)
                candidate=x;
            
            if(x==candidate)
                count++;
            else
                count--;
        }
        return candidate;
    }
};