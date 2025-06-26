class Solution {
    int find(vector<int>nums, int k){
        int numbo=1;
        long long numbos=0;
        for(int i =0;i<nums.size();i++){
            if(numbos+nums[i]<=k){
                numbos+=nums[i];
            }
            else{
                numbo++;
                numbos=nums[i];
            }
        }
        return numbo;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int i = *max_element(nums.begin(),nums.end());
        int j = accumulate(nums.begin(),nums.end(),0);
        while(i<=j){
            int mid=i+(j-i)/2;
            int count = find(nums,mid);
            if(count >k) i=mid+1;
            else j=mid-1;

        }
        return i;
    }
};