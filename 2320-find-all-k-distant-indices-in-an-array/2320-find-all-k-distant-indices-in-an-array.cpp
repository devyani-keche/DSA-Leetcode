class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector <int> j;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==key) j.push_back(i);
        }
      
        vector<int>ans;

        for (int i = 0; i < nums.size(); i++) {
            for (int p = 0; p < j.size(); p++) {
                if (abs(i - j[p]) <= k) {
                    ans.push_back(i);
                    break;
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};