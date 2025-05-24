class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        int i = 0;

        while (nums.size() > 1) {
            int j = nums.size() - 1;

            while (j > i) {
                if (nums[i] == nums[j]) {
                    nums.erase(nums.begin() + j);
                    nums.erase(nums.begin() + i);
                    i = 0;
                    break; 
                }
                j--;
            }

            if (j == i) {
                i++; 
            }
        }


        return nums[0];
    }
};
