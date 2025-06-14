class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1) return 0;
        if(nums.size()==2) {
            if(nums[0]>nums[1]) return 0;
            else return 1;
        }
        int i= 0,j= nums.size()-1;
        while(j-i>=2){
            int mid=(i+j)/2;
            if((nums[mid]>nums[mid+1])&&(nums[mid]>nums[mid-1])) return mid;
            else if((nums[mid]>nums[mid+1])&&(nums[mid]<nums[mid-1])) {
                j=mid;
            }
            else i=mid;
        }
        if(nums[i]>nums[j]) return i;
         return j;
    }
};