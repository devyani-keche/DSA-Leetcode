class Solution {
public:
    int maximumProduct(vector<int>& nums) {
         sort(nums.begin(),nums.end(),greater<int>());
        int a = nums[0]*nums[1]*nums[2];
        int b = nums[0]*nums[nums.size()-1]*nums[nums.size()-2];
        return max(a,b);
    }
};