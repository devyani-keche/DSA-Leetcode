class Solution {
public:
    int findLHS(vector<int>& nums) {
        if (nums.size() <= 1) return 0;

        sort(nums.begin(), nums.end()); 
        int i = 0, j = 0, maxi = 0;

        while (j < nums.size()) {
           
            if (nums[j] - nums[i] <= 1) {
                if (nums[j] - nums[i] == 1) {
                   
                    maxi = max(maxi, j - i + 1);
                }
                j++; 
            } else {
                i++; 
            }
        }
        
        return maxi;
    }
};
