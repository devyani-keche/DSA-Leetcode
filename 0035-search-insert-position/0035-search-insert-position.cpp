class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums[0]>=target) return 0;
        else if(nums[nums.size()-1]==target) return nums.size()-1;
        else if(nums[nums.size()-1]<=target) return nums.size();
        for(int i =1;i<nums.size();i++){
            if(target>nums[i-1] && target<=nums[i]) return i;
        }
        return -1;
    }
};