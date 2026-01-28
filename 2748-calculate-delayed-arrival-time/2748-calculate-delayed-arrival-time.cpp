class Solution {
public:
    int findDelayedArrivalTime(int a, int d) {
        int hours=24;
        int arrived=a+d;
        if(arrived<hours)
            return arrived;
        else
            return arrived-hours;
    }
};