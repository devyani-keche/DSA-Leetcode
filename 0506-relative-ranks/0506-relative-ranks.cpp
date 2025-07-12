class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<pair<int, int>> scoreIndex; 

        for (int i = 0; i < n; i++) {
            scoreIndex.push_back({score[i], i});
        }

        sort(scoreIndex.rbegin(), scoreIndex.rend());

        vector<string> result(n);
        for (int i = 0; i < n; i++) {
            int idx = scoreIndex[i].second;
            if (i == 0)
                result[idx] = "Gold Medal";
            else if (i == 1)
                result[idx] = "Silver Medal";
            else if (i == 2)
                result[idx] = "Bronze Medal";
            else
                result[idx] = to_string(i + 1);
        }

        return result;
    }
};
