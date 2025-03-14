class Solution {
public:
    int reverse(int x) {
        long long a=0,c;

        while(x!=0){
            c=x%10;
            x=x/10;
            if((a*10>=pow(2,31))||(a*10<pow(-2,31))) return 0;
            a=a*10+c;
        }
        return a;
    }
};