class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count =0;
        vector <int> h;
        for(int i =0;i<heights.size();i++){
            h.push_back(heights[i]);
        }
        sort(h.begin(),h.end());
        for(int i =0;i<heights.size();i++){
            if(h[i]!=heights[i]) count++;
        }
        return count;
    }
};