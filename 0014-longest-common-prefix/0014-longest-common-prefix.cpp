class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         if (strs.empty()) return "";
        if(strs.size()==1) return strs[0];
        string str="";
        int j=0;
        int i=1;
        while(i<strs.size()){
          if (j >= strs[i].size() || j >= strs[i - 1].size() || strs[i][j] != strs[i - 1][j]) {
                break;
            }
           else if(i==strs.size()-1){
                str+=strs[i][j];
                i=1;
                j++;
           }
           else i++;

        }
        return str;
    }
};