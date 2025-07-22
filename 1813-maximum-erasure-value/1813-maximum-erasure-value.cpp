class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> seen;
        int left = 0, right = 0, currSum = 0, maxSum = 0;
        
        while (right < nums.size()) {
            
            if (seen.find(nums[right]) == seen.end()) {
                seen.insert(nums[right]);
                currSum += nums[right];
                maxSum = max(maxSum, currSum);
                right++;
            } else {
                
                seen.erase(nums[left]);
                currSum -= nums[left];
                left++;
            }
        }
        
        return maxSum;
    }
};
