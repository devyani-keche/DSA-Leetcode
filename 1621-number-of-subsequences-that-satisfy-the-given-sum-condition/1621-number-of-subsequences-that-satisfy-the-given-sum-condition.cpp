class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1,count=0;
         const int MOD = 1e9 + 7;
         vector<int> power(nums.size(), 1);
        for (int k = 1; k < nums.size(); ++k) {
            power[k] = (power[k - 1] * 2) % MOD;
        }
        sort(nums.begin(),nums.end());
        while(i<=j){
            if(nums[i]+nums[j]<=target) {
                 count = (count + power[j - i]) % MOD;
                i++;
            }
            else j--;
        }
        return count;
    }
};