class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        auto it = unique(nums.begin(),nums.end());
        nums.erase(it,nums.end());
        if(nums.size()>=3) return nums[2];
        return nums[0];
    }
};