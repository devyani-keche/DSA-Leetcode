class Solution {
private:
    int basic(char num) {
        int rom = 0;
        if (num == 'I') rom = 1;
        else if (num == 'V') rom = 5;
        else if (num == 'X') rom = 10;
        else if (num == 'L') rom = 50;
        else if (num == 'C') rom = 100;
        else if (num == 'D') rom = 500;
        else if (num == 'M') rom = 1000;
        return rom;
    }

public:
    int romanToInt(string s) {
        int rom = 0;
        int i = 0;

        while (i < s.size()) {
            if (i + 1 < s.size() && s[i] == 'C' && s[i + 1] == 'M') {
                rom += 900;
                i += 2;
            } else if (i + 1 < s.size() && s[i] == 'C' && s[i + 1] == 'D') {
                rom += 400;
                i += 2;
            } else if (i + 1 < s.size() && s[i] == 'X' && s[i + 1] == 'C') {
                rom += 90;
                i += 2;
            } else if (i + 1 < s.size() && s[i] == 'X' && s[i + 1] == 'L') {
                rom += 40;
                i += 2;
            } else if (i + 1 < s.size() && s[i] == 'I' && s[i + 1] == 'X') {
                rom += 9;
                i += 2;
            } else if (i + 1 < s.size() && s[i] == 'I' && s[i + 1] == 'V') {
                rom += 4;
                i += 2;
            } else {
                rom += basic(s[i]);
                i++;
            }
        }

        return rom;
    }
};
