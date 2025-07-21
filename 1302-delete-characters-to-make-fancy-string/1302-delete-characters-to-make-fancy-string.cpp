class Solution {
public:
    string makeFancyString(string s) {
         string str = s.substr(0, 2); 
        for(int i =2;i<s.size();i++){
            if(s[i]!=s[i-1] || s[i]!=s[i-2]){
                str+=s[i];
            }
        }
        return str;
    }
};