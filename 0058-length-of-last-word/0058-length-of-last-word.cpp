class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> arr;
        string temp = "";   
        
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] != ' ') {  
                temp += s[i];
            } else if (!temp.empty()) { 
                arr.push_back(temp);  
                temp = "";            
            }
        }
        
      
        if (!temp.empty()) {
            arr.push_back(temp);
        }

        return arr.empty() ? 0 : arr.back().size();
    }
};
