class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int,int>> numInd;
        for(int i=0;i<nums.size();i++){
            numInd.push_back({i,nums[i]});
        }
        sort(numInd.begin(),numInd.end(),[](auto & a, auto & b){
            return a.second>b.second;
        });
        numInd.resize(k);
        sort(numInd.begin(),numInd.end(),[](auto & a, auto & b){
            return a.first<b.first;
        });
        nums.clear();
        for (auto &p : numInd) nums.push_back(p.second);
        return nums;
    }
};