class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1) return true;
        long long i = 1;
        while(i<n){
            if(i*2==n) {
                return true;
            }
            i=i*2;
        }
        return false;
    }
};