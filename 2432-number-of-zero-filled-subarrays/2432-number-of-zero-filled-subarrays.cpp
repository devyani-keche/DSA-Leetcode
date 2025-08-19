class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long zeroes=0,conti=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) conti++;
            else conti=0;
            zeroes +=conti;
        }
        return zeroes;
    }
};