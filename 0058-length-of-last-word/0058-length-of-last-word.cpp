class Solution {
public:
    int lengthOfLastWord(string s) {
       int t=0;
       int prev=0;
        
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] != ' ') {  
               t++;
            } if (s[i]==' ' || i==s.size()-1) { 
                if(t!=0) prev=t;
                t=0;         
            }
        }
        
      
       

        return prev;
    }
};
