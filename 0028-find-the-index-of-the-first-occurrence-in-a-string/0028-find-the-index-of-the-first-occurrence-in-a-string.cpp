class Solution {
public:
    int strStr(string haystack, string needle) {
        int a=-1;
        int n=needle.size();
        if(n>haystack.size()) return a;
        else{
        for (int i =0;i<=haystack.size()-n;i++){
            if (haystack.substr(i,n)==needle) return i;
        }
        }
        return a;
    }
};