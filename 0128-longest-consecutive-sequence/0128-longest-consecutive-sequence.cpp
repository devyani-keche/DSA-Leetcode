class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()== 0) return 0;
         
        sort(nums.begin(),nums.end());
        
        int count=1;
        int max1=1;
        for(int i =0;i<nums.size()-1;i++){
            if(nums[i+1]-nums[i]==1) count++;
            else if(nums[i+1]-nums[i]!=0) count=1;
            max1 =max(max1,count);
        }
        return max1;
    }
};