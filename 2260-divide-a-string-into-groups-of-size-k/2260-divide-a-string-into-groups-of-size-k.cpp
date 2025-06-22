class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n = (s.size() + k - 1) / k; 
        vector<string> haha(n);
        int i=0;
        for( i =0;i<haha.size()-1;i++){
            haha[i] = s.substr(i * k, k);
        }
        string last=s.substr(k*i);
        while(last.size()<k) last+=fill;
        haha[haha.size()-1]=last;
    
    return haha;
    }
};