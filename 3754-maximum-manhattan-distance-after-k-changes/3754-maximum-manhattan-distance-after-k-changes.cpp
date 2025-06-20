class Solution {
public:
    int maxDistance(string s, int k) {
        int n = 0, s0 = 0, w = 0, e = 0;
 int maxu=0;
        for (int i = 0; i < s.size(); i++) {
             char c = s[i];
            if (c == 'N') n++;
            if (c == 'S') s0++;
            if (c == 'W') w++;
            if (c == 'E') e++;

            int x = abs(n - s0);
             int y = abs(e - w);
               int count= x + y;
                int dist = count + min(2 * k, i + 1 - count);
            maxu = max(maxu, dist);
        }
       
        return maxu;
    }
};
