class Solution {
public:
    int getSum(int a, int b) {
        int sum=0;
        for(int i=0;i<a;i++) sum++;
        for(int i=0;i>a;i--) sum--;
        for(int i=0;i<b;i++) sum++;
        for(int i=0;i>b;i--) sum--;
        return sum;
    }
};