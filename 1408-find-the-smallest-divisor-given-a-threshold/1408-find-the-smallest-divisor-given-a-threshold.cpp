class Solution {
public:
    int sumofD(vector<int>nums,int div){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=ceil(double(nums[i])/double(div));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        if(nums.size()>threshold) return -1;
        sort(nums.begin(),nums.end(),greater<int>());
        int i=1, j=*max_element(nums.begin(),nums.end());
        while(i<=j){
            int div = (i+j)/2;
            if(sumofD(nums,div)>threshold){
                i=div+1;
            }  
            else j=div-1;
        }
        return i;
    }
};