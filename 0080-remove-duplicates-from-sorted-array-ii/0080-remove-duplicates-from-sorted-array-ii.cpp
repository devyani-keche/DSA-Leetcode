class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int c=0;
        unordered_map<int, int> mp;
        for(int i =nums.size()-1;i>=0;i--){
            mp[nums[i]]++;
        }
        int i=0;
        for (auto it : mp) {
            if(it.second >=2 ){
                nums[i++]=it.first;
                nums[i++]=it.first;
                c+=2;
            } 
            else {
                nums[i++]=it.first;
                c++;
            }
        }
        sort(nums.begin(),nums.begin()+c);
        return c;
    }
};