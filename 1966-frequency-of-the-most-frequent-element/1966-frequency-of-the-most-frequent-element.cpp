class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end()); 
        long long total = 0;          
        int l = 0;                     
        int result = 0;                

        for (int r = 0; r < nums.size(); r++) {
            total += nums[r]; 
            while ((long long)nums[r] * (r - l + 1) - total > k) {
                total -= nums[l]; 
                l++;              
            }
        
            result = max(result, r - l + 1);
        }
        
        return result; 
    }
};
