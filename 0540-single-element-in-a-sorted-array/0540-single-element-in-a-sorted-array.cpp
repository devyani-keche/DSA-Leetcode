class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        while(i<=j){
            if(i==j) return nums[i];
            int mid = (i+j)/2;
            if(nums[mid]==nums[mid-1]){
               if((mid-i)%2==0) j=mid-2;
               else i=mid+1;
            }
            else if(nums[mid]==nums[mid+1]){
               if((j-mid)%2==1) j=mid-1;
               else i=mid+2;
            }
            else {
                if((mid-1)%2==0) return nums[mid-1];
                return nums[mid];
            }
        }
        return -1;
    }
};