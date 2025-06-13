class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        int i=0,j=nums.size()-1;
        while(i<=j){
            int mid= (i+j)/2;
            if(nums[mid]==target) return true;
            while (i < mid && nums[i] == nums[mid]) i++;
            while (j > mid && nums[j] == nums[mid]) j--;
            if (nums[i] <= nums[mid]) { 
           if (target >= nums[i] && target < nums[mid]) j= mid-1;
                else i=mid+1;
            }
            else {
           
            if (target > nums[mid] && target <= nums[j])  i= mid+1;
                else j=mid-1;

            }
        }
        return false;
    }
};

