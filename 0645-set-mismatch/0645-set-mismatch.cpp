class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector <int> arr;
        int k=1;
        sort(nums.begin(),nums.end());
        for(int i =1;i<nums.size();i++){
            if(nums[i-1]==nums[i]) {
                arr.push_back(nums[i]);
                break;
            }
        }
         for(int i =0;i<nums.size();i++){
            if(nums[i]==k) k++;
            else if(nums[i]==arr[0]) continue;
            else{
                arr.push_back(k);
                break;
            }
        }
        if(arr.size()==2) return arr;
        else arr.push_back(k); return arr;
        
    }
};