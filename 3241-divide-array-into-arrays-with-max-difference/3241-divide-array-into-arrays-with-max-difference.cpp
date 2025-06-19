class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> arr;
        vector<int> p;
        int a = nums[0];
        p.push_back(a);
        int i=1;
        for(i=1;i<nums.size();i++){
            if(i%3==0){
                if(nums[i-1]-nums[i-3]>k) return {};
                arr.push_back(p);
                p.clear();
                p.push_back(nums[i]);
            }
            else p.push_back(nums[i]);
        } if(nums[i-1]-nums[i-3]>k) return {};
                arr.push_back(p); 
    return arr; 
    }
};