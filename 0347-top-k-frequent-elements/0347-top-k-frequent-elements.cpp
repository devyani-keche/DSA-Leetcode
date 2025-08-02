class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> arr;
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        vector<pair<int, int>> vec;
        for (auto it : mp) {
            vec.push_back({it.first, it.second});
        }

        sort(vec.begin(), vec.end(), [](pair<int, int>& a, pair<int, int>& b) {
            return a.second > b.second;
        });

        for (int i = 0; i < k; i++) {
            arr.push_back(vec[i].first);
        }

        return arr;
    }
};
