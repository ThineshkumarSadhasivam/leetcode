class Solution {
public:
    int largestInteger(int num) {
        int e=0,o=0,res=0;
        vector<int>digits;
        vector<int>even,odd;
        while(num>0){
            int digit=num%10;
            digits.push_back(digit);
            num/=10;
        }
        reverse(digits.begin(),digits.end());
        for(int x:digits){
            if(x%2==0)
                even.push_back(x);
            else
                odd.push_back(x);
        }
        sort(even.begin(),even.end(),greater<int>());
        sort(odd.begin(),odd.end(),greater<int>());
        for(int x:digits){
            if(x%2==0)
                res=res*10+even[e++];
            else
                res=res*10+odd[o++];
        }
        return res; 
    }
};