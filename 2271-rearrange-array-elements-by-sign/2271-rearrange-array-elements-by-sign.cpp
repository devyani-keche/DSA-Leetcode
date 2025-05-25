class Solution {
public:

    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr(n,0);
        int j=0;
        int k=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0) {
                arr[k]=nums[i];
                k+=2;
            }
             if(nums[i]>0) {
                arr[j]=nums[i];
                j+=2;
            }
        }
        return arr;
    }
};