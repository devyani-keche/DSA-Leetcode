class Solution {
public:
    char kthCharacter(int k) {
        string word="a";
        while(word.size()<k){
            string p="";
            for(int i =0;i<word.size();i++){
                if(word[i]=='z') p+="a";
                else p+=word[i]+1;
            }
            word+=p;
        }
        return word[k-1];
    }
};