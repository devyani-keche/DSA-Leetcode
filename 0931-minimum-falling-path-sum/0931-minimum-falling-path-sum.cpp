class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n= matrix.size();
        vector<int> dp=matrix[0];
        vector<int>curr=dp;
        int sum1=INT_MAX,sum2=INT_MAX,sum3=INT_MAX;
        for(int i =1;i<n;i++){
            dp=curr;
            for(int j=0;j<n;j++){
                if(j>0)sum1=dp[j-1];
                else sum1=INT_MAX;
                sum2=dp[j];
                if(j<n-1)sum3=dp[j+1];
                else sum3=INT_MAX;
                int a = min(sum1,sum2);
                curr[j]=matrix[i][j]+min(a,sum3);
            }
        }
        return *min_element(curr.begin(),curr.end());        
    }
};