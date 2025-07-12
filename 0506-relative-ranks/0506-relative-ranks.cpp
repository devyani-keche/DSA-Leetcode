class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> strs;
        vector<int> copy;
        for (int i = 0; i < score.size(); i++) copy.push_back(score[i]);

        sort(copy.begin(), copy.end(), greater<int>());

        for (int i = 0; i < score.size(); i++) {
            if (score[i] == copy[0]) strs.push_back("Gold Medal");
            else if (score[i] == copy[1]) strs.push_back("Silver Medal");
            else if (score[i] == copy[2]) strs.push_back("Bronze Medal");
            else {
                for (int j = 3; j < copy.size(); j++) {
                    if (score[i] == copy[j]) {
                        strs.push_back(to_string(j + 1));
                        break; 
                    }
                }
            }
        }
        return strs;
    }
};
