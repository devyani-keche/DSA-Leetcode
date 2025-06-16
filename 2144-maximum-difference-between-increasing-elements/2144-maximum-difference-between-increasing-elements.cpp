class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int i =1,j=nums.size()-1;
        int mini=nums[0],res=-1;
        while(i<=j){
            if(mini>=nums[i]){  
                mini=nums[i]; 
            }
            else {
                res=max(res,nums[i]-mini);
            } 
           
                i++;
        }
        return res;
    }
};