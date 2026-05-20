class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> ans(A.size(),0);
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        int c=0;
        for(int i =0;i<A.size();i++){
            mp1[A[i]]++;
            mp2[B[i]]++;
            if(A[i]!=B[i]){
            if(mp1.contains(B[i])) c++;
            if(mp2.contains(A[i]))c++;
            }else c++;
            ans[i]=c;
        }
        return ans;
    }
};