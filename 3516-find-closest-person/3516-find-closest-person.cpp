class Solution {
public:
    int findClosest(int x, int y, int z) {
        if(abs(z-x) < abs(z-y)) return 1;
        else if (abs(z-y) < abs(z-x)) return 2;
        return 0;
    }
};