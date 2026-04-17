#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

class Solution {
    int mirror(int num){
        int rev = 0;
        while(num > 0){
            rev = rev * 10 + (num % 10);
            num /= 10;
        }
        return rev;
    }

public:
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int> nextSeen;
        int mini = INT_MAX;

        for(int i = nums.size() - 1; i >= 0; i--){
            int mir = mirror(nums[i]);

            // now this ensures j > i
            if(nextSeen.find(mir) != nextSeen.end()){
                mini = min(mini, nextSeen[mir] - i);
            }

            nextSeen[nums[i]] = i;
        }

        return mini == INT_MAX ? -1 : mini;
    }
};