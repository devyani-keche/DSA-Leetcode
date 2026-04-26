class Solution {
    int haha(vector<int>&nums){
        int prev1=nums[0],prev2=0;
        int sum1=0,sum2=0,curr;
        for(int i=1;i<nums.size();i++){
            if(i==1) sum1+=nums[i];
            else sum1= nums[i]+prev2;
            sum2=prev1;
            curr=max(sum1,sum2);
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
    }
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        vector<int>sub1(nums.begin() + 1, nums.end());
        vector<int>sub2(nums.begin(), nums.end() - 1);
        int h1 = haha(sub1);
        int h2 = haha(sub2);
        return max(h1,h2);
    }
};