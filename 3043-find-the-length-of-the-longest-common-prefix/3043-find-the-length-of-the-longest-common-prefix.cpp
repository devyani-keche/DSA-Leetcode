class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        if(arr1.size()==0|| arr2.size()==0) return 0;
        int maxi = 0;
        unordered_set<int> setu;
        for(int num:arr1){
            while(num>0){
                setu.insert(num);
                num/=10;
            }
        }
        for(int num:arr2){
            while(num>0){
            if(setu.contains(num)){
                int len=to_string(num).size();
                maxi=max(maxi,len);
            }
            num/=10;
            }
        }
        return maxi;
    }
};