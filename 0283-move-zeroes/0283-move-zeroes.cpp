class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int i=0,j=0;
        // while(j<nums.size()){
        //     if(nums[j]==0 && nums[i]!=0){
        //         int t=nums[i];
        //         nums[i]=nums[j];
        //         nums[j]=t;
        //     }else if(nums[j]!=0) j++;
        //     else {
        //         if(i<nums.size()-1) i++;
        //         else break;
        //     }
        // }
        int n = nums.size();
        int j=0;
        for(int i =0;i<n;i++){
            if(nums[i]!=0) nums[j++]=nums[i];
        }
        while(j<n){
            nums[j]=0;
            j++;
        }
    }
};