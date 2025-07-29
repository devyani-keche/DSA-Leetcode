class Solution {
public:
    int countGoodTriplets(vector<int>& nums,int a, int b,int c) {
        int count=0;
        for(int i=0;i<nums.size()-2;i++){
            for(int j=i+1;j<nums.size()-1;j++){
                for(int k =j+1;k<nums.size();k++){
                    if(abs(nums[i] - nums[j]) <= a && abs(nums[j] - nums[k]) <= b && abs (nums[i] - nums[k]) <= c) count++;
                }
            }
        }
        return count;
    }
};