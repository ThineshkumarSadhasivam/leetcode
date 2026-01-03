class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end(),greater<int>());
        int a=apple.size();
        int c=capacity.size();
        int sum=0,count=0,temp=0;
        for(int i=0;i<a;i++){
            sum+=apple[i];
        }
        for(int i=0;i<c;i++){
            temp+=capacity[i];
            count++;
            if(temp>=sum)
                return count;
        }
        return count;
    }
};