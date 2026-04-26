class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int prev2=nums[0];
        int prev1=0;
        int sum1=0,sum2=0,curr;
        for(int i=1;i<nums.size();i++){
            if(i>1) sum1=nums[i]+prev1;
            else sum1+=nums[i];
            sum2=prev2;
            curr=max(sum1,sum2);
            prev1=prev2;
            prev2=curr;
        }
        return prev2;
    }
};