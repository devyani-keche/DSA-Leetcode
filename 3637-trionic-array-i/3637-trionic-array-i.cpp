class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        if(nums.size()<=3) return false;
        int i=1,f=0;
        while(i<nums.size() && nums[i]>nums[i-1]){
            i++;
            f=1;
        } 
        
        if(i==nums.size() || f==0) return false;
        while(i<nums.size() && nums[i]<nums[i-1]){
            i++;
        } if(i==nums.size()) return false;
        while(i<nums.size() && nums[i]>nums[i-1]){
            i++;
        } 
        return i==nums.size();
    }
};