class Solution {
public:
    int maximumLength(vector<int>& nums) {
        if(nums.size()<2) return -1;
        int a=nums[0],even=0,odd=0,alt=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                even++;
            }else odd++;
            if(i>=1 && nums[i]%2!=a%2){
                alt++;
                a=nums[i];
            }
        }
        return max({even,odd,alt});
    }
};