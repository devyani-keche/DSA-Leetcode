class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int a=nums[0];
        int s1=min(nums[1],nums[2]),s2=max(nums[1],nums[2]);
        for(int i=3;i<nums.size();i++){
            if(nums[i]<s1){
                s2=s1;
                s1=nums[i];
            }
            else if(nums[i]<s2) s2=nums[i];
        }
        return a+s1+s2;
    }
};