class Solution {
    int rev(int num){
        int mir=0;
        while(num>0){
            mir=(mir*10)+(num%10);
            num/=10;
        }
        return mir;
    }
public:
    int mirrorDistance(int n) {
        return abs(n-rev(n));
    }
};