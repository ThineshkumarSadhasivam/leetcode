class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n=colors.size();
        int pos=0,max=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(colors[i]!=colors[j])
                    pos=abs(i-j);
            }
            if(pos>max)
                max=pos;
        }
        return max;
    }
};