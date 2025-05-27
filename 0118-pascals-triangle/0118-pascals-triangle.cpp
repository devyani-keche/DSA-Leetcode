class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int i=2;
        vector<vector<int>> pascal(numRows);
        if(numRows>0)pascal[0]={1};
        if(numRows>1)pascal[1]={1,1};
        while(i<numRows){
            vector<int> arr(i+1);
            arr[0]=1;
            arr[i]=1;
            for(int j=1;j<i;j++){
                arr[j]=pascal[i-1][j-1]+pascal[i-1][j];
            }
            pascal[i]=arr;
            i++;
        }
        return pascal;
    }
};