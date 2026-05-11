class Solution {
public:
    int maximumJumps(vector<int>& nums, int target) {
        vector<int>dp(nums.size(),-1);
        dp[0]=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
            if(abs(nums[i]-nums[j])<=target){
                if(dp[i]>=0) dp[j] = max(dp[j], dp[i] + 1);
                
            }
        }}
        return dp[nums.size()-1];
    }
};