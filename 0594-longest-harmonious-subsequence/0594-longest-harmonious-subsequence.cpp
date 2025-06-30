class Solution {
public:
    int findLHS(vector<int>& nums) {
        if (nums.size() <= 1) return 0;

        sort(nums.begin(), nums.end()); // Sort the array
        int i = 0, j = 0, maxi = 0;

        while (j < nums.size()) {
            // Check if the current window is valid
            if (nums[j] - nums[i] <= 1) {
                if (nums[j] - nums[i] == 1) {
                    // Only update maxi for harmonious subsequences
                    maxi = max(maxi, j - i + 1);
                }
                j++; // Expand the window
            } else {
                i++; // Shrink the window
            }
        }
        
        return maxi;
    }
};
