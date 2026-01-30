class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int x=n*n;
        int container=maxWeight/w;
        int mn=min(x,container);
        return mn;
    }
};