class Solution {
public:
    bool hasVowel(const string& word) {
    for (char c : word) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            return true;
        }
    }
    return false;
}

bool hasConsonant(const string& word) {
    for (char c : word) {
        if (isalpha(c) && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')) {
            return true;
        }
    }
    return false;
}

bool hasDigit(const string& word) {
    for (char c : word) {
        if (isdigit(c)) return true;
    }
    return false;
}

bool hasAlpha(const string& word) {
    for (char c : word) {
        if (isalpha(c)) return true;
    }
    return false;
}
bool isAlnumOnly(const string& word) {
    for (char c : word) {
        if (!isalnum(c)) return false;
    }
    return true;
}

bool isValid(const string& word) {
    return word.size() >= 3 &&
           isAlnumOnly(word) &&
           (hasDigit(word) || hasAlpha(word)) &&
           hasVowel(word) &&
           hasConsonant(word);
}
};