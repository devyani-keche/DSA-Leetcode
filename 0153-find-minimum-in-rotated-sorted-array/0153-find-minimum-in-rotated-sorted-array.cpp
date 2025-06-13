class Solution {
public:
    int findMin(vector<int>& nums) {
        int i=0,j= nums.size()-1;
        while(i<=j){
            if(i==j) return nums[i];
            int mid= (i+j)/2;
            if(nums[i]>nums[j] && nums[mid]>=nums[j]){
                i=mid+1;
            }
            else if(nums[i]>nums[j] && nums[mid]<=nums[mid+1] && nums[mid]>=nums[mid-1]){
                j=mid-1;
            }
            
            else if(nums[i]<nums[j] && nums[mid]>=nums[i]) j=mid-1; 
            else i= mid;
       
        }
        return nums[i];
    }
};