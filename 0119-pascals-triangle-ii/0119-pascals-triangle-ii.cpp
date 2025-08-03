class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans(rowIndex,1);

        for(int i=0;i<rowIndex+1;i++){
            vector<int>temp(i+1,1);
            
            for(int j=1;j<i;j++){
                temp[j]=ans[j-1]+ans[j];
            }
            ans=temp;
        }
        return ans;
    }
};