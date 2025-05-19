#include <string>
#include <climits>
#include <cstdlib>

class Solution {
public:
    int myAtoi(std::string s) {
        std::string str = "";
        int i = 0;

        // Ignore leading whitespaces
        while (i < (int)s.size() && s[i] == ' ') {
            i++;
        }

        // Check if string is empty after removing spaces
        if (i == (int)s.size()) return 0;

        // Append sign or digit if valid
        if (s[i] == '+' || s[i] == '-' || (s[i] >= '0' && s[i] <= '9')) {
            str += s[i];
            i++;
        } else {
            return 0;
        }

        // Parse remaining digits
        while (i < (int)s.size() && (s[i] >= '0' && s[i] <= '9')) {
            str += s[i];
            i++;
        }

        // Now check for overflow before conversion
        long long num = 0;
        int sign = 1;
        int start = 0;

        if (str[0] == '-') {
            sign = -1;
            start = 1;
        } else if (str[0] == '+') {
            start = 1;
        }

        for (int j = start; j < (int)str.size(); j++) {
            num = num * 10 + (str[j] - '0');
            // Check overflow and underflow
            if (sign == 1 && num > INT_MAX) {
                return INT_MAX;
            }
            if (sign == -1 && -num < INT_MIN) {
                return INT_MIN;
            }
        }

        return (int)(sign * num);
    }
};
