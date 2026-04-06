class Solution {
public:
    bool isPalindrome(string str) {
        string temp=str;
        int left=0,right=str.length()-1;

        while(left<right){
            if(!isalnum(str[left]))
                left++;
            else if(!isalnum(str[right]))
                right--;
            else{
                if(tolower(str[left])!=tolower(str[right]))
                    return false;
                left++;
                right--;
            }
        }
        return true;
    }
};