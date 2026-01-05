class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n=arr1.size();
        int n1=arr2.size();
        int count=0;
        for(int i=0;i<n;i++){
            int a=0;
            for(int j=0;j<n1;j++){
                int x=abs(arr1[i]-arr2[j]);
                if(x<=d){
                    a=1;
                    break;
                }
            }
            if(a==0)
                count++;
            }
        return count;
    }
};