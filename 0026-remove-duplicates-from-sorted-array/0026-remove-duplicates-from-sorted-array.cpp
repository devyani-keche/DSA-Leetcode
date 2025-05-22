class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> re;
        sort(nums.begin(),nums.end());
        int num = nums[0];
        int count=1;
        re.push_back(num);
        for(int i =0;i<nums.size();i++){
            if(nums[i]!= num) {
                num=nums[i];
                re.push_back(nums[i]);
                count++;
            }
        }
        for(int i =0;i<re.size();i++){
          
                nums[i]=re[i];
            
            
        }
        return count;
    }
};