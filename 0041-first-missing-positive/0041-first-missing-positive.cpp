class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        int i =0;
        int n=nums.size();
          while (i < n && nums[i] <= 0) i++;
        if (i == n || nums[i] != 1) return 1;
        while(i<n-1){
            if(nums[i+1]-nums[i]!=1) return nums[i]+1;
            i++;
        }
        return nums[i]+1;
    }
};