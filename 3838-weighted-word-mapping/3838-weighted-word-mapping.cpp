class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";
        for(int i=0;i<words.size();i++){
            string s = words[i];
            int sum =0;
            for(int j = 0;j<s.size();j++){
                sum+=weights[s[j] - 'a'];
            }
            ans+=25-(sum%26)+'a';
        }
        return ans;
    }
};