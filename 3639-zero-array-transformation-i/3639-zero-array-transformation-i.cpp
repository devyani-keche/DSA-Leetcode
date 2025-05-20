class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        ios_base :: sync_with_stdio(false);
        cin.tie(NULL);

         int size = nums.size();
            vector<int> arr(size + 1, 0);
            for (int j=0;j<queries.size();j++){
                int a = queries[j][0];
                int b = queries[j][1];
                arr[a]++;
                arr[b+1]--;
            }
                int cnt=0;
             for(int i =0;i<nums.size();i++){
                cnt+=arr[i];
                    if(nums[i]>cnt) return false;
                }
                return true;
    }
};