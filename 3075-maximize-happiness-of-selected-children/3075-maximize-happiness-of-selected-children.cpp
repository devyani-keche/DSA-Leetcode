class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end(),greater<int>());
        long long sum =0,a=0;
        for(int i =0;i<k;i++){
            if(happiness[i]-a>0){
                sum+=happiness[i]-a;
                happiness[i]=0;
                a++;
            }
        }
        return sum;
    }
};