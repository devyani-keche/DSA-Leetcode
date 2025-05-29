class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int curr = nums[0], max = 0,n=nums.size();

        vector<int> arr;
        for(int i =0;i<n;i++){
            if (curr == nums[i]){
                max++;
            } 
            if(curr!=nums[i]) {
                max=1;
                curr=nums[i];
            }
            if(max == (n/3)+1) arr.push_back(nums[i]);
            
        }
        return arr;
    }
};