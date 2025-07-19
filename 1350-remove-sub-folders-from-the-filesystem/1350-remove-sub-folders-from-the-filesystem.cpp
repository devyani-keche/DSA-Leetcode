class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        sort(folder.begin(), folder.end());
        vector<string> ans;
        
        for (int i = 0; i < folder.size(); i++) {
            string s = folder[i];
            bool f = false;

            if (ans.empty()) {
                ans.push_back(s);
                continue;
            }

            string last = ans.back();
            if (s.length() > last.length() && s.substr(0, last.length()) == last && s[last.length()] == '/') {
                f = true;
            }

            if (!f) {
                ans.push_back(s);
            }
        }

        return ans;
    }
};