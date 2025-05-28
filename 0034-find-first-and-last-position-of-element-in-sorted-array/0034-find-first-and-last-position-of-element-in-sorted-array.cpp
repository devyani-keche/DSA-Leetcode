class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> arr(2,-1);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target) {
                arr[0]=i;
                arr[1]=i;
                 break;
            }
        }
        for(int i=nums.size()-1;i>arr[0];i--){
            if(nums[i]==target){
                arr[1]=i;
                break;
            }
        }
        return arr;
    }
};