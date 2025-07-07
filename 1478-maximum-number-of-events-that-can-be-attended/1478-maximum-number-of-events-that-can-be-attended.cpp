class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
         sort(events.begin(), events.end());
        priority_queue<int, vector<int>, greater<int>> pq;

        int n = events.size(), i = 0, day = 1, res = 0;

        int last_day = 0;
        for (auto& e : events) last_day = max(last_day, e[1]);

        while (day <= last_day) {
            while (i < n && events[i][0] == day) {
                pq.push(events[i][1]);
                i++;
            }

            while (!pq.empty() && pq.top() < day) {
                pq.pop();
            }

            if (!pq.empty()) {
                pq.pop();
                res++;
            }

            day++;
        }

        return res;
    }
};