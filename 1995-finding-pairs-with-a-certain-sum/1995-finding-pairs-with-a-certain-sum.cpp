class FindSumPairs {
public:
    vector <int> nums1,nums2;
    unordered_map<int, int> map; 
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        this->nums1 = nums1;
        this->nums2 = nums2;
        for(int i=0;i<nums2.size();i++){
            map[nums2[i]]++;
        }
    }
    
    void add(int index, int val) {
        map[nums2[index]]--;
        if (map[nums2[index]] == 0) map.erase(nums2[index]);
        nums2[index] += val;
        map[nums2[index]]++;
    }
    
    int count(int tot) {
        int num = 0;
        for (int i=0;i<nums1.size();i++) {
            int target = tot - nums1[i];
            if (map.count(target)) {
                num += map[target];
            }
        }
        return num;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */