class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        unordered_map <int,int>mp;
        for(int i =0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        sort(nums.begin(),nums.end());
        if(nums[nums.size()-1]<2*nums[nums.size()-2]) return -1;
        return mp[nums[nums.size()-1]];
    }
};