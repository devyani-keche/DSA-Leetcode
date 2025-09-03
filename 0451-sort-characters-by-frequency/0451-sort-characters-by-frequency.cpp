class Solution {
public:
    string frequencySort(string s) {
        unordered_map <char,int> map;
        for(int i=0;i<s.size();i++){
            map[s[i]]++;
        }
        vector<pair<char, int>> vec(map.begin(), map.end());
         sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });
        string result;
        for (auto &p : vec) {
            result.append(p.second, p.first); 
        }

        return result;
    }
};