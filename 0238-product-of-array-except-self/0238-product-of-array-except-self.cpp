class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int noofzero=0;
        int pro=1;
        for(int i =0;i<nums.size();i++){
            if(pro*nums[i]!=0) pro*=nums[i];
            else noofzero++;;
        }
        for(int i =0;i<nums.size();i++){
            if(noofzero==0) nums[i]=pro/nums[i];
            else if(noofzero==1 && nums[i]==0){
                nums[i]=pro;
            }
            else nums[i]=0;
        }
        return nums;
    }
};