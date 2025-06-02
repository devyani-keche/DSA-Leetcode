class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row =matrix.size();
        int column = matrix[0].size();
        int i=0,j=column-1;
        while(i<row && j>=0){
            
            if(target==matrix[i][j]) return true;
            if(target>matrix[i][j] ) i++;
            else j--;
        }
        return false;
    }
};