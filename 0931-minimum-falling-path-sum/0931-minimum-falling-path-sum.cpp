class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n= matrix.size();
        vector<int> dp=matrix[0];
        vector<int>curr=dp;
        int sum1,sum2,sum3;
        for(int i =1;i<n;i++){
            for(int j=0;j<n;j++){
                if(j>0)sum1=dp[j-1];
                else sum1=INT_MAX;
                sum2=dp[j];
                if(j<n-1)sum3=dp[j+1];
                else sum3=INT_MAX;
                curr[j]=matrix[i][j]+min({sum1,sum2,sum3});
            }
            dp=curr;
        }
        return *min_element(dp.begin(),dp.end());        
    }
};