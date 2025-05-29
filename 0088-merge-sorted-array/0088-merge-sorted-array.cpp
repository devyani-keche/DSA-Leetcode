class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> arr(nums1.begin(),nums1.begin()+m);
        int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (arr[i] <= nums2[j]) {
            nums1[k++] = arr[i++];
        } else {
            nums1[k++] = nums2[j++];
        }
    }
    while (i < m) {
        nums1[k++] = arr[i++];
    }
    while (j < n) {
        nums1[k++] = nums2[j++];
    }
    }
};