class Solution {
public:
    int maxDifference(string s) {
        int maxodd=INT_MIN;
         int mineven=INT_MAX;
        sort(s.begin(),s.end());
        char ch=s[0];
        int count=1;
        for(int i=1;i<s.size();i++){
            if(ch==s[i]){
                count++;
            }
            else{
                if(count%2==0){
                   
                    mineven=min(mineven,count);
                    count=1;
                    ch=s[i];
                }
                else if(count%2!=0){
                    maxodd=max(maxodd,count);
                   
                    count=1;
                    ch=s[i];
                }
            }
        }
        if(count%2==0){
                
                    mineven=min(mineven,count);
                }
                else if(count%2!=0){
                    maxodd=max(maxodd,count);
                  
                }
        return (maxodd-mineven);
    }
};