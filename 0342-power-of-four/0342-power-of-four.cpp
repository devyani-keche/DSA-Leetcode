class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return true;
        float a=n;
        while(a>4){
            a=a/4;
        }
        return a==4;
    }
};