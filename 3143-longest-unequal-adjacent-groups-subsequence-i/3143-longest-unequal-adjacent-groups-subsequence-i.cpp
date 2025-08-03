class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> arr;
        int l, len1=0,len2=0;

            for (int i =0;i<groups.size();i++){
                if(groups[i]==0) arr.push_back(words[i]);
                l=i;
                break;
            }
            for (int j =l+1;j<groups.size();j++){
                if(groups[j]!=groups[j-1]) arr.push_back(words[j]);
            }
            len1 = arr.size();
            //0first
            arr.clear();
            for (int i =0;i<groups.size();i++){
                if(groups[i]==1) arr.push_back(words[i]);
                l=i;
                break;
            }
            for (int j =l+1;j<groups.size();j++){
                if(groups[j]!=groups[j-1]) arr.push_back(words[j]);
            }
            len2 = arr.size();
            //1first
            if(len2>=len1) return arr;
            else{
                arr.clear();
                for (int i =0;i<groups.size();i++){
                if(groups[i]==0) arr.push_back(words[i]);
                l=i;
                break;
                }
                for (int j =l+1;j<groups.size();j++){
                    if(groups[j]!=groups[j-1]) arr.push_back(words[j]);
                }
                return arr;
            }
        // }
    }
};