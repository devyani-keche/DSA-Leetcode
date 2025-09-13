class Solution {
public:
    int maxFreqSum(string s) {
        sort(s.begin(),s.end());
        int vo=0,co=0;
        int vmax=0,cmax=0;
        char ch=s[0];
        for(int i =0;i<s.size();i++){
            if(ch==s[i]){
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                    vo++;

            }else co++;
            }
            else {
                ch=s[i];
                cmax=max(co,cmax);
                vmax=max(vo,vmax);
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                    vo=1;

            }else co=1;
               
            }
        }
         cmax=max(co,cmax);
                vmax=max(vo,vmax);
        return cmax+vmax;
    }
};