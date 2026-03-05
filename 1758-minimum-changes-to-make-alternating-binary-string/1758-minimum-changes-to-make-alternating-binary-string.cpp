class Solution {
public:
    int minOperations(string s) {
        int firstz=0,firsto=0;
        for(int i=0;i<s.size();i++){
            if(i%2==0 && s[i]=='1') firstz++;
            else if (i%2==1 && s[i]=='0') firstz++;
        }
        for(int i=0;i<s.size();i++){
            if(i%2==0 && s[i]=='0') firsto++;
            else if (i%2==1 && s[i]=='1') firsto++;
        }
        return min(firstz,firsto);
    }
};