class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int counter=INT_MAX,f=0;
        for(int i=0;i<nums.size();i++){
            if(f==1 && nums[i]==0){
                counter++;
            } 
            if (nums[i]==1){
                f=1;
                if(counter<k) return false;
                counter=0;
            } 
        }
        return true;
    }
};