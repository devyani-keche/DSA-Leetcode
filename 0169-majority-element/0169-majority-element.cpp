class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        int p=0, d=nums[0];
        for (int i=0;i<n;i++){
            if(nums[i]==d) p++;
            else {
                d= nums[i];
                p=1;
            }
            if(p>n/2) return nums[i];
        }
        return -1;
    }
};