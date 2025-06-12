class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n=nums.size();
        int maxdiff=abs(nums[n-1]-nums[0]);
        for(int i=0;i<n-1;i++){
            maxdiff=max(maxdiff, abs(nums[i]-nums[i+1]));
        }
        return maxdiff;
    }
};