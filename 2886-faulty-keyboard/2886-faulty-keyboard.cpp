class Solution {
public:
    string finalString(string s) {
        string p="";
        for(int i =0;i<s.size();i++){
            if(s[i]=='i') reverse(p.begin(),p.end());
            else p+=s[i];
        }
        return p;
    }
};