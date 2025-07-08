class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int>arr;
        for(int i =0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                arr.push_back(matrix[i][j]);
            }
        }
        sort(arr.begin(),arr.end());
        return arr[k-1];
    }
};