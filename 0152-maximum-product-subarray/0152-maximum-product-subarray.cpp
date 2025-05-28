class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product = nums[0];
        int maxpro = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (product == 0) product = 1;
            product *= nums[i];
            maxpro = max(product, maxpro);
        }

        product = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (product == 0) product = 1;
            product *= nums[i];
            maxpro = max(product, maxpro);
        }

        return maxpro;
    }
};
