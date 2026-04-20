class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int j=colors.size()-1,i=0,maxi=0;
        while(i<=j){
            if(colors[i]!=colors[j]){
                maxi=max(maxi,j-i);
                i++;
                j=colors.size()-1;
            } 
            else if(colors[i]==colors[j]) j--;
        }
        
    return maxi;
    }
};