class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max1=nums[0];
        int current=0;
        for(int i=0;i<nums.size();i++){
            current+=nums[i];
            max1=max(max1,current);
            if(current<0) current =0;
            
        }
        return max1;
    }
};