class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
         vector<int> arr;
        for (int i=0;i<nums.size();i++){
            int k = target-nums[i];
             
                if (map.find(k) != map.end()) {

                 arr.push_back(i);
                arr.push_back(map[k]);
                 return arr;
             }
             map[nums[i]]=i;
             }
        return arr;
        }
    
};