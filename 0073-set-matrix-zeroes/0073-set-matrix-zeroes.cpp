class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size(); // Number of rows
    if (m == 0) return; // Handle empty matrix case
    int n = matrix[0].size(); // Number of columns

    vector<int> row(m, 0); // Initialize vector with size 'm', filled with 0
    vector<int> col(n, 0); // Initialize vector with size 'n', filled with 0

    // Traverse the matrix to find zeroes
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    // Set rows and columns to zero based on markers
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (row[i] == 1 || col[j] == 1) {
                matrix[i][j] = 0;
            }
        }
    }
}

};