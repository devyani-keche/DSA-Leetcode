class Solution {
public:
    int integerBreak(int n) {
        if (n==1 )return 1;
        if (n==2 )return 1;
        if (n==0)return 0;
        if (n==3) return 2;
        if (n ==4) return 4;
        int temp=n;
        int three=0,two=0;
        while(n>1){
            if(n>=3 && n-3!=1) {
                three++;
                n=n-3;
            }
            else {
                two++;
                n=n-2;
            }
        }
        return pow(2,two)*pow(3,three);
    }
};