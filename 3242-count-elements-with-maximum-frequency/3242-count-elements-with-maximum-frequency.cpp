class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> freq;

        // Step 1: count frequency
        for (int num : nums) {
            freq[num]++;
        }

        // Step 2: find max frequency
        int maxFreq = 0;
        for (auto &p : freq) {
            if (p.second > maxFreq) {
                maxFreq = p.second;
            }
        }

        // Step 3: sum up occurrences of all elements having maxFreq
        int result = 0;
        for (auto &p : freq) {
            if (p.second == maxFreq) {
                result += p.second;
            }
        }

        return result;
    }
};
