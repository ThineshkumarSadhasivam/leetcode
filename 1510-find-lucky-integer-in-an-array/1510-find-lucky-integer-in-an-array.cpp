class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n=arr.size();
        int freq[501]={0};
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        for(int i=500;i>=0;i--){
            if(freq[i]==i)
                if(i==0)
                    return -1;
                else    
                    return i;
        }
    return -1;
    }
};