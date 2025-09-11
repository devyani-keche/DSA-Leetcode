class Solution {
public:
    string sortVowels(string s) {
        unordered_map <char,int>freq;
        for(int i =0;i<s.size();i++){
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||
               s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                freq[s[i]]++;
            }
        }
        for(int i =0;i<s.size();i++){
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||
               s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                if(freq['A']>0) {
                    s[i]='A';
                    freq['A']--;
                }
                else if(freq['E']>0) {
                    s[i]='E';
                    freq['E']--;
                }
                else if(freq['I']>0) {
                    s[i]='I';
                    freq['I']--;
                }
                else if(freq['O']>0) {
                    s[i]='O';
                    freq['O']--;
                }
                else if(freq['U']>0) {
                    s[i]='U';
                    freq['U']--;
                }
                else if(freq['a']>0) {
                    s[i]='a';
                    freq['a']--;
                }
                else if(freq['e']>0) {
                    s[i]='e';
                    freq['e']--;
                }
                else if(freq['i']>0) {
                    s[i]='i';
                    freq['i']--;
                }
                else if(freq['o']>0) {
                    s[i]='o';
                    freq['o']--;
                }
                else  {
                    s[i]='u';
                    freq['u']--;
                }

            
        }}
        return s;
    }
};