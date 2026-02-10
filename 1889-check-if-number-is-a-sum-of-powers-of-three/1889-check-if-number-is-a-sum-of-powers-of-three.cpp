class Solution {
public:
    bool checkPowersOfThree(int n) {
        //int count=0;
        while(n>0){
            if(n%3==2)
                return false;
            //else{
                n/=3;
                //count++;
            //}
        }
        //if(count>0)
            return true;
        //return false;
    }
};