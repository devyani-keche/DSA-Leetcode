class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int i=1;
        while(i<nums.size()){
            if(nums[i]!=nums[i-1]) i++;
            else{
                for(int j=i;j<nums.size()-1;j++){
                    nums[j]=nums[j+1];
                }
                nums.pop_back();
            }
        }
        int count=0;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]<nums[i-1] && nums[i]<nums[i+1]) count ++;
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]) count ++;
        }
        return count;
    }
};