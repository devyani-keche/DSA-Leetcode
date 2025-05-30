class Solution {
public:
    int findDuplicate(std::vector<int>& nums) {
        int i = nums[0];
        int j = nums[0];

        do {
            i = nums[i];
            j = nums[nums[j]];
        } while (i != j);

        i = nums[0];
        while (i != j) {
            i = nums[i];
            j = nums[j];
        }

        return i;
    }
};
