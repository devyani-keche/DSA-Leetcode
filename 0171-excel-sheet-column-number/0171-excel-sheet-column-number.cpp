class Solution {
public:
    int titleToNumber(string columnTitle) {
        unordered_map<char,int> map;
        for(int i = 0; i < 26; i++) {
            map['A' + i] = i + 1;
        }
        int num = 0;
        for(int i = 0; i < columnTitle.size(); i++) {
            num = num * 26 + map[columnTitle[i]];
        }
        return num;
    }
};
