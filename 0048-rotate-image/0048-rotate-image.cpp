class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int arr[20][20];
        reverse(matrix.begin(),matrix.end());
        for(int i=0;i<matrix.size();i++){
            for(int j =0;j<matrix.size();j++){
                arr[i][j]=matrix[j][i];
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j =0;j<matrix.size();j++){
                matrix[i][j]=arr[i][j];
            }
        }
    }
};